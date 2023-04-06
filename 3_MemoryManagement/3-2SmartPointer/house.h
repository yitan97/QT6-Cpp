#ifndef HOUSE_H
#define HOUSE_H

#include <QObject>

class House : public QObject
{
    Q_OBJECT

private:
    QString m_descr;

public:
    /* Constructor explicit */
    explicit House(QObject *parent = nullptr, const QString &descr = "");

    /* Destructor: Called when the onject dies */
    ~House();

    /* Methods */
    void const print_info();
};

#endif // HOUSE_H
