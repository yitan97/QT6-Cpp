#ifndef BOX_H
#define BOX_H

class Box
{
private:
    float m_w;
    float m_l;

public:
    Box();
    Box(float w);
    ~Box();

    void setWidth(float w);
    float getArea();
};

#endif // BOX_H
