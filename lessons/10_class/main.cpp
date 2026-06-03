#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string owner;
    double balance;

public:
    BankAccount(std::string accountOwner, double initialBalance)
    {
        owner = accountOwner;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
        }
    }

    bool withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            return true;
        }

        return false;
    }

    void printInfo() const
    {
        std::cout << "Owner: " << owner << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main()
{
    BankAccount account("Alice", 100.0);

    std::cout << "Initial account:" << std::endl;
    account.printInfo();

    std::cout << std::endl;
    std::cout << "Deposit 50..." << std::endl;
    account.deposit(50.0);
    account.printInfo();

    std::cout << std::endl;
    std::cout << "Withdraw 30..." << std::endl;

    bool success = account.withdraw(30.0);

    if (success)
    {
        std::cout << "Withdraw successful." << std::endl;
    }
    else
    {
        std::cout << "Withdraw failed." << std::endl;
    }

    account.printInfo();

    std::cout << std::endl;
    std::cout << "Withdraw 500..." << std::endl;

    success = account.withdraw(500.0);

    if (success)
    {
        std::cout << "Withdraw successful." << std::endl;
    }
    else
    {
        std::cout << "Withdraw failed." << std::endl;
    }

    account.printInfo();

    return 0;
}
