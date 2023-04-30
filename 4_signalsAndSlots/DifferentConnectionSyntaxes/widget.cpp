#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    /* Init */
    textPrev = "Push Button to change text";
    restart_text();

    /* connect declarations*/
    connect(
                ui->Button1,
                &QPushButton::clicked,
                this,
                &Widget::changeText
            );
    connect(
                ui->Button2,
                &QPushButton::clicked,
                this,
                &Widget::restart_text
            );

}

Widget::~Widget()
{
    delete ui;
}

/* Methods */
void Widget::changeText()
{
    QString H = Widget::ui->Text->text();
    ui->Text->setText("Text changed");
}

void Widget::restart_text()
{
    ui->Text->setText(Widget::textPrev);
}
