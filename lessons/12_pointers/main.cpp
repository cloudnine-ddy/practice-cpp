#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int score;
};

void addOneByValue(int number)
{
    number = number + 1;
}

void addOneByReference(int& number)
{
    number = number + 1;
}

void addOneByPointer(int* number)
{
    if (number != nullptr)
    {
        *number = *number + 1;
    }
}

void printStudentByPointer(const Student* student)
{
    if (student == nullptr)
    {
        std::cout << "No student." << std::endl;
        return;
    }

    std::cout << "Name: " << student->name << std::endl;
    std::cout << "Score: " << student->score << std::endl;
}

int main()
{
    std::cout << "Lesson 12 - Pointers" << std::endl;
    std::cout << "--------------------" << std::endl;

    int value = 10;

    std::cout << "value: " << value << std::endl;
    std::cout << "address of value: " << &value << std::endl;

    int* pointerToValue = &value;

    std::cout << std::endl;
    std::cout << "pointerToValue stores address: " << pointerToValue << std::endl;
    std::cout << "value through pointer: " << *pointerToValue << std::endl;

    *pointerToValue = 20;

    std::cout << "value after *pointerToValue = 20: " << value << std::endl;

    std::cout << std::endl;
    std::cout << "Pass by value / reference / pointer" << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    int a = 10;
    addOneByValue(a);
    std::cout << "After addOneByValue: " << a << std::endl;

    int b = 10;
    addOneByReference(b);
    std::cout << "After addOneByReference: " << b << std::endl;

    int c = 10;
    addOneByPointer(&c);
    std::cout << "After addOneByPointer: " << c << std::endl;

    std::cout << std::endl;
    std::cout << "nullptr example" << std::endl;
    std::cout << "---------------" << std::endl;

    int* emptyPointer = nullptr;

    if (emptyPointer == nullptr)
    {
        std::cout << "emptyPointer points to nothing." << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Pointer to struct" << std::endl;
    std::cout << "-----------------" << std::endl;

    Student student;
    student.name = "Alice";
    student.score = 95;

    Student* studentPointer = &student;

    printStudentByPointer(studentPointer);
    printStudentByPointer(nullptr);

    return 0;
}
