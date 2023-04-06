#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>

#include <cstdlib>
#include <ctime>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* Set up the seed in constructor */
    std::srand(std::time(nullptr));

    /* Generate number between 1 and 10 */
    secret_number = std::rand() % 10 + 1;

    qDebug() << "The secret number generated is: " << QString::number(secret_number);

    /* Disable the sart over button */
    ui->startOverButton->setDisabled(true);

    ui->messageLabel->setText("");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guessButton_clicked()
{

    guess_number = ui->numSpinBox->value();
    qDebug() << "User guessed is: " <<QString::number(guess_number);

    /* Check if the number is right */
    if( guess_number == secret_number)
    {
        /* Show the congratulations message */
        ui->messageLabel->setText(
                     "Congratulation, the number is " + QString::number(guess_number));
        /* Button hosekeeping */
        ui->guessButton->setDisabled(true);
        ui->startOverButton->setDisabled(false);
    }
    else
    {
        if( secret_number < guess_number )
        {
            /* Show message */
            ui->messageLabel->setText("Number is lower than that");
        }

        else if( secret_number > guess_number )
        {
            /* Show message */
            ui->messageLabel->setText("Number is highet than that");
        }

    }
}


void Widget::on_startOverButton_clicked()
{
    /* Enable the guess button */
    ui->guessButton->setDisabled(false);

    /* Disable the start over button */
    ui->startOverButton->setDisabled(true);

    /* Put the spinbox back to 1 */
    ui->numSpinBox->setValue(1);

    /* Regenerate the random number */
    secret_number = std::rand() % 10 + 1;

    /* Clear the message Label */
    ui->messageLabel->setText("");

}

