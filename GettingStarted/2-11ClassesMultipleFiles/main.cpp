#include <iostream>
#include "rectangle.h"
#include "box.h"

int main()
{
    Rectangle *r = new Rectangle(2,3);
    Box *b = new Box(3);

    std::cout << "Rectangle area: " << r->getArea() << std::endl;
    std::cout << "Box area: " << b->getArea() << std::endl;

    delete r;
    delete b;

    return 0;
}
