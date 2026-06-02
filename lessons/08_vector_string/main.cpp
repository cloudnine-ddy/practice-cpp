#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> names;

    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");

    std::cout << "Names:" << std::endl;

    for (std::size_t i = 0; i < names.size(); i++)
    {
        std::cout << i << ": " << names[i] << std::endl;
    }

    std::cout << std::endl;

    std::vector<int> scores;
    int count;

    std::cout << "How many scores do you want to enter? ";
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        int score;

        std::cout << "Enter score " << i + 1 << ": ";
        std::cin >> score;

        scores.push_back(score);
    }

    int total = 0;

    for (int score : scores)
    {
        total = total + score;
    }

    double average = 0.0;

    if (!scores.empty())
    {
        average = static_cast<double>(total) / scores.size();
    }

    std::cout << std::endl;
    std::cout << "Scores:" << std::endl;

    for (int score : scores)
    {
        std::cout << score << " ";
    }

    std::cout << std::endl;
    std::cout << "Total: " << total << std::endl;
    std::cout << "Average: " << average << std::endl;

    std::string word;

    std::cout << std::endl;
    std::cout << "Enter one word: ";
    std::cin >> word;

    std::cout << "You entered: " << word << std::endl;
    std::cout << "Length: " << word.length() << std::endl;

    if (!word.empty())
    {
        std::cout << "First character: " << word[0] << std::endl;
        std::cout << "Last character: " << word[word.length() - 1] << std::endl;
    }

    return 0;
}
