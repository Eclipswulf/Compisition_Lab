#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double bal, double rate)
    : BankAccount(bal), interestRate(rate)
{
}

void SavingsAccount::calculateInterest()
{
    double interest = balance * interestRate;
    balance += interest;
}

void SavingsAccount::display() const
{
    std::cout << "[Savings Account] ";
    BankAccount::display();
}