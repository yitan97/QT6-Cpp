#include <iostream>

class Rectangle
{
private:
    float width;
    float leght;

public:
    Rectangle()
    {
        width = 5;
        leght = 2;
    };
    Rectangle(float w, float l)
    {
        width = w;
        leght = l;
    };

    void setWidth(float w);
    void setLeght(float l);

    float getArea()
    {
        return width * leght;
    }

    ~Rectangle()
    {
        std::cout << "Deleted Rectangle" << std::endl;
    }
};

void Rectangle::setWidth(float w)
{
    width = w;
}

void Rectangle::setLeght(float l)
{
    leght = l;
}


int main()
{
    //Rectangle *r = new Rectangle(2,8);
    Rectangle *r = new Rectangle();
    std::cout << r->getArea() << std::endl;
    delete r;
    return 0;
}
