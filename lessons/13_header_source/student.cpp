#include "student.hpp"

#include <iostream>

void printStudent(const Student& student)
{
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Score: " << student.score << std::endl;
    std::cout << "Passed: " << isPassed(student) << std::endl;
}

bool isPassed(const Student& student)
{
    return student.score >= 60;
}

void improveScore(Student& student, int points)
{
    student.score = student.score + points;

    if (student.score > 100)
    {
        student.score = 100;
    }
}
