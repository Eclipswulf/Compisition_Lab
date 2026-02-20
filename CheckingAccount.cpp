#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double bal, double fee)
    : BankAccount(bal), transactionFee(fee)
{
}

void CheckingAccount::withdraw(double amount)
{
    double total = amount + transactionFee;

    if (amount > 0 && balance >= total)
    {
        balance -= total;
        std::cout << "Transaction fee of $" << transactionFee << " applied.\n";
    }
    else
    {
        std::cout << "Insufficient funds (including fee).\n";
    }
}

void CheckingAccount::display() const
{
    std::cout << "[Checking Account] ";
    BankAccount::display();
}