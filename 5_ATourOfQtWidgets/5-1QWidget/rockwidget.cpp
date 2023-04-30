#include "rockwidget.h"
#include <QMessageBox>
#include <QLabel>
#include <QPushButton>


RockWidget::RockWidget(QWidget *parent)
    : QWidget{parent}
{

    QLabel *label = new QLabel(this);
    label->setText("first line\nsecond line");
    label->move(50,50);

    /* Add a styed widget and move it around */
    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window, Qt::yellow);
    label1Palette.setColor(QPalette::WindowText, Qt::blue);

    QFont label1Font("Times", 20, QFont::Bold);

    QLabel *label1 = new QLabel(this);
    label1->setAutoFillBackground(true);
    label1->setText("My colored label");
    label1->setFont(label1Font);
    label1->setPalette(label1Palette);
    label1->move(150,50);


    /* Add another label */
    QPalette label2Palette;
    label2Palette.setColor(QPalette::Window, Qt::green);
    label2Palette.setColor(QPalette::WindowText, Qt::black);

    QFont label2Font("Times", 20, QFont::Bold);

    QLabel *label2 = new QLabel(this);
    label2->setAutoFillBackground(true);
    label2->setText("This´s my label 2");
    label2->setFont(label2Font);
    label2->setPalette(label2Palette);
    label2->move(70,170);

    /* Add button */
    QFont buttonFont("Times", 30, QFont::Bold);
    QPushButton *button = new QPushButton(this);
    button->setText("Click Me");
    button->setFont(buttonFont);
    button->move(100,250);
    connect(
                button,
                &QPushButton::clicked,
                this,
                &RockWidget::button_clicked
                );

}

void RockWidget::button_clicked()
{
    QMessageBox::information(this,"Message","You clicked on my button");
    QMessageBox::warning(this, "Message", "WARNING");
    QMessageBox::critical(this,"Message", "Critical");
    QMessageBox::question(this,"Message", "Question");
}

QSize RockWidget::sizeHint() const
{
    return QSize(500,500);
}
