#define DEFAULT 0

#include "widget.h"
#include "ui_widget.h"
#include "QDebug"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    /* Set default value */
    ui->progressBar->setValue(DEFAULT);

    /* Define connect */
    connect(
            ui->horizontalSlider,
            &QSlider::valueChanged,
            this,
            &Widget::change_value
            );
}

Widget::~Widget()
{
    delete ui;
}

/**
 * @abstract: Get value from horizontal slider and set it on progress bar
 * @name:change_value
 **/
void Widget::change_value()
{
    ui->progressBar->setValue(ui->horizontalSlider->value());
    qDebug() << "Value: " << ui->horizontalSlider->value();
}
