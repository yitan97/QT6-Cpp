#include <iostream>

int main()
{
    /* Syntax of Lambdas function
     * [capture list](parameter list) ->return_value_type {function body}
     */
    /* Case 1 */
    auto func = []()
    {
        std::cout << "Hello world" << std::endl;
    };
    func();
    /* Case 2 */
    []()
    {
        std::cout << "Hello world" << std::endl;
    }();

    /* Case 3 */
    [](int a, int b)
    {
        std::cout << "a + b = " << a+b << std::endl;
    }(7,3);

    /* Case 4 */
    auto func1 = [](int a, int b)
    {
        std::cout << "a + b = " << a+b << std::endl;
    };
    func1(70,30);

    /* Case 5 */
    std::cout << "The sum is: " << [](int a, int b)->int{ return a + b; }(7,3) << std::endl;

    /* Case 6 */
    auto func2 = [](int a, int b)
    {
        return a + b;
    };
    auto value = func2(20,30);
    std::cout << "The sum is: " << value << std::endl;

    /* Case 7 */
    int a = 70;
    int b = 50;
    [a, b]()
    {
        std::cout << "The sum is: " << a + b << std::endl;
    }();

    /* Case 8 */
    int c =40;
    auto func3 = [c]()
    {
      /* c is a copy */
      std::cout << "The inner value of c is: " << c << std::endl;
    };

    for(int i=1; i<5; i++)
    {
        std::cout << "The outer value of c is: " << c << std::endl;
        func3();
        c = c + 1;
    }

    return 0;
}
