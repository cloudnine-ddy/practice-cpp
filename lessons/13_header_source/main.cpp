#include <iostream>
#include <vector>

#include "student.hpp"

int main()
{
    std::cout << "Lesson 13 - Header and Source Files" << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    Student alice;
    alice.name = "Alice";
    alice.score = 85;

    Student bob;
    bob.name = "Bob";
    bob.score = 58;

    std::vector<Student> students;
    students.push_back(alice);
    students.push_back(bob);

    std::cout << std::endl;
    std::cout << "Before improving scores:" << std::endl;

    for (const Student& student : students)
    {
        printStudent(student);
        std::cout << std::endl;
    }

    improveScore(students[1], 10);

    std::cout << "After improving Bob's score:" << std::endl;

    for (const Student& student : students)
    {
        printStudent(student);
        std::cout << std::endl;
    }

    return 0;
}
