#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
    QString textPrev;

public:
    Widget(QWidget *parent = nullptr);
    void changeText();
    void restart_text();
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
