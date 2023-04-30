#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->count->setNum(0);

    connect(
            ui->doubleSpinBox__weight,
            &QDoubleSpinBox::valueChanged,
            this,
            &Widget::calory_caltulate
            );
    connect(
            ui->doubleSpinBox_speed ,
            &QDoubleSpinBox::valueChanged,
            this,
            &Widget::calory_caltulate
            );
    connect(
            ui->doubleSpinBox_time,
            &QDoubleSpinBox::valueChanged,
            this,
            &Widget::calory_caltulate
            );
//    connect(
//            ui->comboBox_slope,
//            &QComboBox::,
//            this,
//            &Widget::calory_caltulate
//            );

}

Widget::~Widget()
{
    delete ui;
}

void Widget::calory_caltulate()
{
    double weight = ui->doubleSpinBox__weight->value();
    double speed = ui->doubleSpinBox_speed->value();
    double time = ui->doubleSpinBox_time->value();

    ui->count->setNum((0.0215*(speed*speed*speed) - 0.1765*(speed*speed) + 0.8710*speed + 1.4577)*weight*time);

}
