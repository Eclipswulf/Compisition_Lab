#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(double bal, double rate);

    void calculateInterest();
    void display() const override;
};

#endif