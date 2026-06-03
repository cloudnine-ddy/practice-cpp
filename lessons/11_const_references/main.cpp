#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string name;
    int score;
};

void printLine()
{
    std::cout << "--------------------" << std::endl;
}

void addOneByValue(int number)
{
    number = number + 1;
    std::cout << "Inside addOneByValue: " << number << std::endl;
}

void addOneByReference(int& number)
{
    number = number + 1;
    std::cout << "Inside addOneByReference: " << number << std::endl;
}

void printStudent(const Student& student)
{
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Score: " << student.score << std::endl;
}

void improveScore(Student& student, int points)
{
    student.score = student.score + points;
}

int main()
{
    printLine();
    std::cout << "Part 1 - const variable" << std::endl;
    printLine();

    const int maxScore = 100;

    std::cout << "Max score: " << maxScore << std::endl;

    printLine();
    std::cout << "Part 2 - Pass by value" << std::endl;
    printLine();

    int a = 10;

    std::cout << "Before addOneByValue: " << a << std::endl;
    addOneByValue(a);
    std::cout << "After addOneByValue: " << a << std::endl;

    printLine();
    std::cout << "Part 3 - Pass by reference" << std::endl;
    printLine();

    int b = 10;

    std::cout << "Before addOneByReference: " << b << std::endl;
    addOneByReference(b);
    std::cout << "After addOneByReference: " << b << std::endl;

    printLine();
    std::cout << "Part 4 - Struct with reference" << std::endl;
    printLine();

    Student student;
    student.name = "Alice";
    student.score = 85;

    std::cout << "Before improveScore:" << std::endl;
    printStudent(student);

    improveScore(student, 10);

    std::cout << "After improveScore:" << std::endl;
    printStudent(student);

    printLine();
    std::cout << "Part 5 - Vector and size_t" << std::endl;
    printLine();

    std::vector<Student> students;

    students.push_back({"Alice", 95});
    students.push_back({"Bob", 82});
    students.push_back({"Charlie", 76});

    for (std::size_t i = 0; i < students.size(); i++)
    {
        std::cout << "Index " << i << ": ";
        std::cout << students[i].name << " - " << students[i].score << std::endl;
    }

    printLine();
    std::cout << "Part 6 - Range-for with const reference" << std::endl;
    printLine();

    for (const Student& s : students)
    {
        printStudent(s);
        std::cout << std::endl;
    }

    return 0;
}
