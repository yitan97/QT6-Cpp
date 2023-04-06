#include <QCoreApplication>
#include "house.h"
#include <memory.h>
#include <QDebug>

void do_stuff()
{

    /* Create parent */
    House *p_parent = new House(nullptr,"Parent");

    /* Create children relationship */
    House *p_house1 = new House(p_parent, "Children");

    /* Create grand children relationship*/
    House *p_house2 = new House(p_house1, "GrandChildren");

    /* Delete parent and all relationship (children and grand children) */
    delete p_parent;

//    /* Using a unique pointer */

//    /* Create parent */
//    std::unique_ptr<House> p_parent {new House(nullptr,"Parent")};

//    /* Create children relationship */
//    House *p_house1 = new House(p_parent.get(), "Children");

//    /* Create grand children relationship*/
//    House *p_house2 = new House(p_house1, "GrandChildren");

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Starting ...";
    do_stuff();
    qDebug() << "Ending ...";
    return a.exec();
}
