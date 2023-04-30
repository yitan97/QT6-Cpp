#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* Initializer the members with values from the ui */
    m_person.setWeight(ui->doubleSpinBox_Weight->value());
    m_time = ui->doubleSpinBox_Time->value();
    m_speed = ui->doubleSpinBox_Speed->value();
    calculate_calories();

    /* Connect to the spinboxes */
    connect(ui->doubleSpinBox_Weight, &QDoubleSpinBox::valueChanged, this, &Widget::weight_changed);
    connect(ui->doubleSpinBox_Speed, &QDoubleSpinBox::valueChanged, this, &Widget::speed_changed);
    connect(ui->doubleSpinBox_Time, &QDoubleSpinBox::valueChanged, this, &Widget::time_changed);

    /* Display the calory count */
    connect(this, &Widget::calory_count_changed,
            [=](){ ui->label_2->setNum(m_calory_count);});
}

Widget::~Widget()
{
    delete ui;
}

/* Methods */
void Widget::calculate_calories()
{
    m_calory_count = ( (0.0215*(m_speed * m_speed * m_speed)) -
                     ( 0.1765 * (m_speed * m_speed) ) + (0.8710 * m_speed) + 1.4577 ) *
                     m_person.weight() * m_time;
    ui->label_2->setNum(m_calory_count);
    emit calory_count_changed();
}

void Widget::weight_changed(double weight)
{
    m_person.setWeight(weight);
    calculate_calories();
}

void Widget::time_changed(double time)
{
    m_time = time;
    calculate_calories();
}

void Widget::speed_changed(double speed)
{
    m_speed = speed;
    calculate_calories();
}

///* Slots */
//void Widget::on_doubleSpinBox_Time_valueChanged(double arg1)
//{
//    Widget::time_changed(arg1);
//}

//void Widget::on_doubleSpinBox_Weight_valueChanged(double arg1)
//{
//    Widget::weight_changed(arg1);
//}

//void Widget::on_doubleSpinBox_Speed_valueChanged(double arg1)
//{
//    Widget::speed_changed(arg1);
//}

