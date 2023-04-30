/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QLocale>
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
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_Time;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_Weight;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_Slope;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_Speed;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(361, 230);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(Widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setWordWrap(false);

        horizontalLayout_6->addWidget(label);

        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2->setLocale(QLocale(QLocale::Spanish, QLocale::Spain));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Plain);

        horizontalLayout_6->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        doubleSpinBox_Time = new QDoubleSpinBox(Widget);
        doubleSpinBox_Time->setObjectName("doubleSpinBox_Time");
        doubleSpinBox_Time->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(doubleSpinBox_Time);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        doubleSpinBox_Weight = new QDoubleSpinBox(Widget);
        doubleSpinBox_Weight->setObjectName("doubleSpinBox_Weight");
        doubleSpinBox_Weight->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(doubleSpinBox_Weight);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        comboBox_Slope = new QComboBox(Widget);
        comboBox_Slope->addItem(QString());
        comboBox_Slope->setObjectName("comboBox_Slope");
        comboBox_Slope->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(comboBox_Slope);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        doubleSpinBox_Speed = new QDoubleSpinBox(Widget);
        doubleSpinBox_Speed->setObjectName("doubleSpinBox_Speed");
        doubleSpinBox_Speed->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(doubleSpinBox_Speed);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Calory Count:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Time (h):", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Weight (kg):", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Slope:", nullptr));
        comboBox_Slope->setItemText(0, QCoreApplication::translate("Widget", "Level", nullptr));

        label_6->setText(QCoreApplication::translate("Widget", "Speed (km/h):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
