#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string name;
    int age;
    double score;
};

void printStudent(const Student& student)
{
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Age: " << student.age << std::endl;
    std::cout << "Score: " << student.score << std::endl;
}

int main()
{
    Student student1;

    student1.name = "Alice";
    student1.age = 20;
    student1.score = 88.5;

    std::cout << "Single student:" << std::endl;
    printStudent(student1);

    std::cout << std::endl;

    std::vector<Student> students;

    students.push_back(student1);

    Student student2;
    student2.name = "Bob";
    student2.age = 21;
    student2.score = 92.0;

    students.push_back(student2);

    Student student3;
    student3.name = "Charlie";
    student3.age = 19;
    student3.score = 76.5;

    students.push_back(student3);

    std::cout << "All students:" << std::endl;
    std::cout << "-------------" << std::endl;

    for (const Student& student : students)
    {
        printStudent(student);
        std::cout << std::endl;
    }

    double totalScore = 0.0;

    for (const Student& student : students)
    {
        totalScore = totalScore + student.score;
    }

    double averageScore = totalScore / students.size();

    std::cout << "Average score: " << averageScore << std::endl;

    return 0;
}
