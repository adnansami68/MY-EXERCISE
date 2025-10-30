#include <iostream>
using namespace std;

class SSL_C {
    float amount;

public:
    void seta(float x) {
        amount = x;
    }

    float getAmount() {
        return amount;
    }

    void showa() {
        cout << "Bkash payment amount: " << amount << endl;
    }
};

class Bkash_Pay : private SSL_C {
public:
    void bkashpay(float amount, float balance) {
        float service = amount * 0.5;
        float total = amount + service;


        if (balance >= total) {
            seta(amount);
            cout << "Payment Successful" << endl;
            cout << "Total Withdraw: " << total << endl;
            cout << "New Balance: " << balance - total << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }
};

int main() {
    Bkash_Pay ob;
    float amount, balance;

    cout<<"Hey I'm Adnan Sami, Welcome to my <ASPay> "<<endl;

    cout << "Enter Amount : ";
    cin >> amount;
    cout << "Enter Balance : ";
    cin >> balance;
    ob.bkashpay(amount, balance);
    return 0;
}

