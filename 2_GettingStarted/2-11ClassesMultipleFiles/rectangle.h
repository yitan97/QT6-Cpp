#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    float m_w;
    float m_l;

public:
    Rectangle();
    Rectangle(float a, float b);
    ~Rectangle();

    void setWidth(float w);
    void setLeght(float l);
    float getArea();
};

#endif // RECTANGLE_H
