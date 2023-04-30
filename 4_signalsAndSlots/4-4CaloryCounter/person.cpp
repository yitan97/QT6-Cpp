#include "person.h"

double const Person::weight()
{
    return m_weight;
}
void Person::setWeight(double weight)
{
    if(m_weight != weight)
    {
        m_weight = weight;
        emit weightChanged();
    }
}
