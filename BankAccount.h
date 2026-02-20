#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>

class BankAccount
{
protected:
    std::string accountHolder;
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string name, std::string accNum, double bal);
    BankAccount(double bal);
    BankAccount();

    virtual ~BankAccount();
    virtual void withdraw(double amount);
    void deposit(double amount);

    double getBalance() const;
    virtual void display() const;
};

#endif