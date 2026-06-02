#include <iostream>

int main()
{
    int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::cout << std::endl;
    std::cout << "Counting from 1 to " << n << ":" << std::endl;

    for (int i = 1; i <= n; i++)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    int sum = 0;
    int current = 1;

    while (current <= n)
    {
        sum = sum + current;
        current++;
    }

    std::cout << "Sum from 1 to " << n << " = " << sum << std::endl;

    std::cout << std::endl;
    std::cout << "Numbers from 1 to " << n << ", skipping multiples of 3:" << std::endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }

        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Counting until the first number greater than 10:" << std::endl;

    for (int i = 1; i <= n; i++)
    {
        if (i > 10)
        {
            break;
        }

        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
