#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

class CheckingAccount : public BankAccount
{
private:
    double transactionFee;

public:
    CheckingAccount(double bal, double fee);

    void withdraw(double amount) override;
    void display() const override;
};

#endif