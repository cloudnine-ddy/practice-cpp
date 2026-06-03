#pragma once

#include <string>

struct Student
{
    std::string name;
    int score;
};

void printStudent(const Student& student);
bool isPassed(const Student& student);
void improveScore(Student& student, int points);
