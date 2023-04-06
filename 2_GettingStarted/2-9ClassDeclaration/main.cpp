#include <iostream>

class Rectangle
{
private:
    float width = 0;
    float lenght = 0;

public:
    /* first form to define metode */
    void setWidth(float w)
    {
        width = w;
    };

    void setLenght(float l)
    {
        lenght = l;
    };

    /* second form to define metode */
    void setLenght1(float l);
    void setWidth1(float w);

    float getArea()
    {
        return width * lenght;
    }
};

/* second form to define metode */
void Rectangle::setLenght1(float l)
{
    this->lenght = l;
};
void Rectangle::setWidth1(float w)
{
    this->width = w;
};


int main()
{
  Rectangle r;

  r.setWidth(10);
  r.setLenght(20);
  std::cout << "Area: " << r.getArea() << std::endl;

  r.setLenght1(11);
  r.setWidth1(22);
  std::cout << "Area: " << r.getArea() << std::endl;
  return 0;
}
