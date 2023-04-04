#include <iostream>
#include "box.h"

/* Constructors */
Box::Box()
{
    std::cout << "Created box" <<std::endl;
}

Box::Box(float w)
{
    m_w = w;
}

Box::~Box()
{
    std::cout << "Deleted box" << std::endl;
}

/* Methods */
void Box::setWidth(float w)
{
    m_w = w;
}

float Box::getArea()
{
    return m_w * m_w;
}
