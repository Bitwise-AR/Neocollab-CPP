#include <iostream>
using namespace std;

class Account {
private:
    int balance;

public:
    Account(int initialBalance) : balance(initialBalance) {}

    void withdraw(int amount) {
        balance -= amount;
    }

    int getBalance() const {
        return balance;
    }
};

int main() {
    int initialBalance, withdrawalAmount;
    
    cin >> initialBalance >> withdrawalAmount;

    if (withdrawalAmount > initialBalance) {
        cout << "Invalid input. Withdrawal amount cannot exceed initial balance." << endl;
        return 1;
    }

    Account account(initialBalance);
    account.withdraw(withdrawalAmount);

    cout << account.getBalance() << endl;

    return 0;
}