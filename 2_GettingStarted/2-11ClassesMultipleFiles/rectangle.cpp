#include <iostream>
#include "rectangle.h"

/* Constructors */
Rectangle::Rectangle()
{
    std::cout << "Created rectangle" << std::endl;
}

Rectangle::Rectangle(float w, float l)
{
    m_w = w;
    m_l = l;
}

Rectangle::~Rectangle()
{
    std::cout << "Deleted rectangle" << std::endl;
}

/* Methods */
void Rectangle::setLeght(float l)
{
    m_l = l;
}

void Rectangle::setWidth(float w)
{
    m_w = w;
}

float Rectangle::getArea()
{
    return m_w * m_l;
}
