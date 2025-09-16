#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int n, double b) {
        accountNumber = n;
        balance = b;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void setBalance(double b) {
        balance = b;
    }

    void showBalance() {
        cout << "Account " << accountNumber
             << " Balance = " << balance << endl;
    }
};

void transfer(BankAccount &A, BankAccount &B, double amount) {
    if (A.getBalance() >= amount) {
        A.setBalance(A.getBalance() - amount);
        B.setBalance(B.getBalance() + amount);
        cout << "Transfer successful!" << endl;
    } else {
        cout << "Insufficient balance!" << endl;
    }
}

int main() {
    BankAccount ac1(17, 50000);
    BankAccount ac2(43, 1000);

    ac1.showBalance();
    ac2.showBalance();

    transfer(ac1, ac2, 10000);

    ac1.showBalance();
    ac2.showBalance();

    return 0;
}
