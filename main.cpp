#include <iostream>
#include <vector>
#include <memory>

#include "CheckingAccount.h"
#include "SavingsAccount.h"

int main()
{
    std::vector<std::unique_ptr<BankAccount>> accounts;

    accounts.push_back(std::make_unique<CheckingAccount>(500.0, 2.0));
    accounts.push_back(std::make_unique<SavingsAccount>(1000.0, 0.05));

    std::cout << "Initial account states:\n";
    for (const auto& acc : accounts)
    {
        acc->display();
    }

    std::cout << "\nWithdrawing $100 from all accounts...\n";

    for (auto& acc : accounts)
    {
        acc->withdraw(100);
    }

    std::cout << "\nAfter withdrawal:\n";
    for (const auto& acc : accounts)
    {
        acc->display();
    }

    // Apply interest only to savings
    std::cout << "\nApplying interest to savings...\n";
    SavingsAccount* savings =
        dynamic_cast<SavingsAccount*>(accounts[1].get());

    if (savings)
        savings->calculateInterest();

    accounts[1]->display();

    return 0;
}