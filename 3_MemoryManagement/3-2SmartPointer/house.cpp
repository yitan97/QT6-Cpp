#include "house.h"
#include <QDebug>

House::House(QObject *parent, const QString &descr): QObject(parent), m_descr((descr))
{

    qDebug() << "House object contructed";
}

House::~House()
{
    qDebug() << "House object: " << m_descr << " is dying ...";
}

void const House::print_info()
{
    qDebug() << "House: " << m_descr;
}
