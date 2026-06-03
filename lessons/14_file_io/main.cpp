#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void saveTasks(const std::vector<std::string>& tasks, const std::string& filename)
{
    std::ofstream outputFile(filename);

    if (!outputFile)
    {
        std::cout << "Failed to open file for writing." << std::endl;
        return;
    }

    for (const std::string& task : tasks)
    {
        outputFile << task << '\n';
    }
}

std::vector<std::string> loadTasks(const std::string& filename)
{
    std::vector<std::string> tasks;

    std::ifstream inputFile(filename);

    if (!inputFile)
    {
        std::cout << "Failed to open file for reading." << std::endl;
        return tasks;
    }

    std::string line;

    while (std::getline(inputFile, line))
    {
        if (!line.empty())
        {
            tasks.push_back(line);
        }
    }

    return tasks;
}

void printTasks(const std::vector<std::string>& tasks)
{
    if (tasks.empty())
    {
        std::cout << "No tasks found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < tasks.size(); i++)
    {
        std::cout << i + 1 << ". " << tasks[i] << std::endl;
    }
}

int main()
{
    std::cout << "Lesson 14 - File I/O" << std::endl;
    std::cout << "--------------------" << std::endl;

    const std::string filename = "build/lesson14_tasks.txt";

    std::vector<std::string> tasks;

    tasks.push_back("Learn C++ file I/O");
    tasks.push_back("Practice reading from a file");
    tasks.push_back("Practice writing to a file");

    std::cout << std::endl;
    std::cout << "Saving tasks to file..." << std::endl;

    saveTasks(tasks, filename);

    std::cout << "Tasks saved." << std::endl;

    std::cout << std::endl;
    std::cout << "Loading tasks from file..." << std::endl;

    std::vector<std::string> loadedTasks = loadTasks(filename);

    std::cout << std::endl;
    std::cout << "Loaded tasks:" << std::endl;

    printTasks(loadedTasks);

    return 0;
}
