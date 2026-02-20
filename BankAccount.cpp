#include "BankAccount.h"

BankAccount::BankAccount()
    : accountHolder("Unknown"), accountNumber("0000"), balance(0.0)
{
}

BankAccount::BankAccount(double bal)
    : accountHolder("Unknown"), accountNumber("0000"), balance(bal)
{
}

BankAccount::BankAccount(std::string name, std::string accNum, double bal)
    : accountHolder(name), accountNumber(accNum), balance(bal)
{
}

BankAccount::~BankAccount() {}

void BankAccount::withdraw(double amount)
{
    if (amount > 0 && balance >= amount)
    {
        balance -= amount;
    }
    else
    {
        std::cout << "Insufficient funds.\n";
    }
}

void BankAccount::deposit(double amount)
{
    if (amount > 0)
        balance += amount;
}

double BankAccount::getBalance() const
{
    return balance;
}

void BankAccount::display() const
{
    std::cout << "Balance: $" << balance << std::endl;
}