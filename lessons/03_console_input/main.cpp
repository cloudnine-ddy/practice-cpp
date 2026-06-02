#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;
    double height;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    std::cout << std::endl;
    std::cout << "Profile" << std::endl;
    std::cout << "-------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " m" << std::endl;

    return 0;
}
