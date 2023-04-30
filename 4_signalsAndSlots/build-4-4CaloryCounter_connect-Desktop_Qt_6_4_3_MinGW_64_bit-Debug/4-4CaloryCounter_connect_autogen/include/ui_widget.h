/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_title;
    QLabel *count;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_time;
    QDoubleSpinBox *doubleSpinBox_time;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_slope;
    QComboBox *comboBox_slope;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_weight;
    QDoubleSpinBox *doubleSpinBox__weight;
    QHBoxLayout *horizontalLayout;
    QLabel *label_speed;
    QDoubleSpinBox *doubleSpinBox_speed;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(303, 129);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 283, 108));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_title = new QLabel(widget);
        label_title->setObjectName("label_title");
        label_title->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(label_title);

        count = new QLabel(widget);
        count->setObjectName("count");
        count->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);"));
        count->setTextFormat(Qt::AutoText);
        count->setScaledContents(false);

        horizontalLayout_5->addWidget(count);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_time = new QLabel(widget);
        label_time->setObjectName("label_time");

        horizontalLayout_3->addWidget(label_time);

        doubleSpinBox_time = new QDoubleSpinBox(widget);
        doubleSpinBox_time->setObjectName("doubleSpinBox_time");

        horizontalLayout_3->addWidget(doubleSpinBox_time);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_slope = new QLabel(widget);
        label_slope->setObjectName("label_slope");

        horizontalLayout_4->addWidget(label_slope);

        comboBox_slope = new QComboBox(widget);
        comboBox_slope->addItem(QString());
        comboBox_slope->setObjectName("comboBox_slope");

        horizontalLayout_4->addWidget(comboBox_slope);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_weight = new QLabel(widget);
        label_weight->setObjectName("label_weight");

        horizontalLayout_2->addWidget(label_weight);

        doubleSpinBox__weight = new QDoubleSpinBox(widget);
        doubleSpinBox__weight->setObjectName("doubleSpinBox__weight");

        horizontalLayout_2->addWidget(doubleSpinBox__weight);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_speed = new QLabel(widget);
        label_speed->setObjectName("label_speed");

        horizontalLayout->addWidget(label_speed);

        doubleSpinBox_speed = new QDoubleSpinBox(widget);
        doubleSpinBox_speed->setObjectName("doubleSpinBox_speed");

        horizontalLayout->addWidget(doubleSpinBox_speed);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_title->setText(QCoreApplication::translate("Widget", "Calory Count", nullptr));
        count->setText(QString());
        label_time->setText(QCoreApplication::translate("Widget", "Time (h):", nullptr));
        label_slope->setText(QCoreApplication::translate("Widget", "Slope:", nullptr));
        comboBox_slope->setItemText(0, QCoreApplication::translate("Widget", "Level", nullptr));

        label_weight->setText(QCoreApplication::translate("Widget", "Weight (Kg):", nullptr));
        label_speed->setText(QCoreApplication::translate("Widget", "Speed (km/h): ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
