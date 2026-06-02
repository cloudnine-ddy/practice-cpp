#include <iostream>

int main()
{
    double width;
    double height;

    std::cout << "Enter rectangle width: ";
    std::cin >> width;

    std::cout << "Enter rectangle height: ";
    std::cin >> height;

    double area = width * height;
    double perimeter = 2 * (width + height);

    std::cout << std::endl;
    std::cout << "Rectangle Result" << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

    int totalMinutes;

    std::cout << std::endl;
    std::cout << "Enter total minutes: ";
    std::cin >> totalMinutes;

    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    std::cout << totalMinutes << " minutes = ";
    std::cout << hours << " hour(s) and ";
    std::cout << minutes << " minute(s)" << std::endl;

    int number;

    std::cout << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    int remainder = number % 2;

    std::cout << number << " % 2 = " << remainder << std::endl;

    return 0;
}
