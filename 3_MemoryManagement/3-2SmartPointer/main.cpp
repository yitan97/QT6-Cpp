#include <QCoreApplication>
#include <QDebug>
#include "house.h"
#include <memory.h>

void do_stuff()
{
    /* Stack Memory */
    House h1(nullptr, "First");
    h1.print_info();

    /* Heap Memory */
    House *p_h1 = new House(nullptr, "Second");
    p_h1->print_info();

    /* Test define unique_ptr type int */
    std::unique_ptr<int> a {new int };
    *a=32;

    /* Unique ptr */
    std::unique_ptr<House> up_house_1 {new House(nullptr,"Third")};
    up_house_1->print_info();

    /* Shared ptr */
    std::shared_ptr<House> shrd_ptr_1 {new House(nullptr,"Fourth")};
    shrd_ptr_1->print_info();

    /* If you dont execute delete to p_h1, it´ll be a memory leak in a future */
    qDebug() << "Executed House Destructor to Second";
    /* Print int value*/
    qDebug() << (*a);
    delete p_h1;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Starting ...";
    do_stuff();
    qDebug() << "Ending ...";

    qDebug() << "Executed House Destructor to First";

    return a.exec();
}
