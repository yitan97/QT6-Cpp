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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *Text;
    QPushButton *Button1;
    QPushButton *Button2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->setEnabled(true);
        Widget->resize(218, 185);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(9);
        Widget->setFont(font);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 11, 191, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Text = new QLabel(widget);
        Text->setObjectName("Text");
        QFont font1;
        font1.setPointSize(18);
        Text->setFont(font1);
        Text->setFrameShape(QFrame::WinPanel);
        Text->setFrameShadow(QFrame::Raised);
        Text->setLineWidth(-2);
        Text->setAlignment(Qt::AlignCenter);
        Text->setWordWrap(true);

        verticalLayout->addWidget(Text);

        Button1 = new QPushButton(widget);
        Button1->setObjectName("Button1");

        verticalLayout->addWidget(Button1);

        Button2 = new QPushButton(widget);
        Button2->setObjectName("Button2");

        verticalLayout->addWidget(Button2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Text->setText(QString());
        Button1->setText(QCoreApplication::translate("Widget", "Button to Change", nullptr));
        Button2->setText(QCoreApplication::translate("Widget", "Button to restart text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
