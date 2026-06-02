#include <iostream>

void printLine()
{
    std::cout << "--------------------" << std::endl;
}

int add(int a, int b)
{
    return a + b;
}

int square(int number)
{
    return number * number;
}

bool isEven(int number)
{
    return number % 2 == 0;
}

double calculateRectangleArea(double width, double height)
{
    return width * height;
}

int main()
{
    printLine();
    std::cout << "Lesson 07 - Functions" << std::endl;
    printLine();

    int x;
    int y;

    std::cout << "Enter first integer: ";
    std::cin >> x;

    std::cout << "Enter second integer: ";
    std::cin >> y;

    int sum = add(x, y);

    std::cout << x << " + " << y << " = " << sum << std::endl;
    std::cout << x << " squared = " << square(x) << std::endl;

    if (isEven(x))
    {
        std::cout << x << " is even." << std::endl;
    }
    else
    {
        std::cout << x << " is odd." << std::endl;
    }

    double width;
    double height;

    std::cout << std::endl;
    std::cout << "Enter rectangle width: ";
    std::cin >> width;

    std::cout << "Enter rectangle height: ";
    std::cin >> height;

    double area = calculateRectangleArea(width, height);

    std::cout << "Rectangle area = " << area << std::endl;

    return 0;
}
