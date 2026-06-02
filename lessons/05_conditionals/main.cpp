#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 0)
    {
        std::cout << "Invalid age." << std::endl;
    }
    else if (age < 13)
    {
        std::cout << "You are a child." << std::endl;
    }
    else if (age < 18)
    {
        std::cout << "You are a teenager." << std::endl;
    }
    else
    {
        std::cout << "You are an adult." << std::endl;
    }

    int number;

    std::cout << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 == 0)
    {
        std::cout << number << " is even." << std::endl;
    }
    else
    {
        std::cout << number << " is odd." << std::endl;
    }

    int score;

    std::cout << std::endl;
    std::cout << "Enter your score: ";
    std::cin >> score;

    if (score >= 90 && score <= 100)
    {
        std::cout << "Grade: A" << std::endl;
    }
    else if (score >= 80 && score < 90)
    {
        std::cout << "Grade: B" << std::endl;
    }
    else if (score >= 70 && score < 80)
    {
        std::cout << "Grade: C" << std::endl;
    }
    else if (score >= 60 && score < 70)
    {
        std::cout << "Grade: D" << std::endl;
    }
    else if (score >= 0 && score < 60)
    {
        std::cout << "Grade: F" << std::endl;
    }
    else
    {
        std::cout << "Invalid score." << std::endl;
    }

    return 0;
}
