#include <iostream>
#include <string>
using namespace std;

// ====================== BKash Class ======================
class BKash {
private:
    string accountName;
    string mobileNumber;
    double balance;
    double chargeRate;

public:
    BKash() : balance(0.0), chargeRate(1.0) {}

    BKash(const string &name, const string &mobile, double balance, double charge)
        : accountName(name), mobileNumber(mobile), balance(balance), chargeRate(charge) {}

    // Getters and Setters
    string getAccountName() const { return accountName; }
    void setAccountName(const string &name) { accountName = name; }

    string getMobileNumber() const { return mobileNumber; }
    void setMobileNumber(const string &mobile) { mobileNumber = mobile; }

    double getBalance() const { return balance; }
    void setBalance(double bal) { balance = bal; }

    double getChargeRate() const { return chargeRate; }
    void setChargeRate(double rate) { chargeRate = rate; }

    // Display Account Info
    void display() const {
        cout << "\n--- BKash Account Details ---\n";
        cout << "Name: " << accountName << "\n";
        cout << "Mobile: " << mobileNumber << "\n";
        cout << "Balance: " << balance << " BDT\n";
    }

    // Check and Perform Payment
    bool canPay(double amount) const {
        double total = amount * chargeRate;
        return balance >= total;
    }

    double pay(double amount) {
        double total = amount * chargeRate;
        balance -= total;
        return total;
    }
};

// ====================== Nogod Class ======================
class Nogod {
private:
    string accountName;
    string mobileNumber;
    double balance;
    double chargeRate;

public:
    Nogod() : balance(0.0), chargeRate(1.0) {}

    Nogod(const string &name, const string &mobile, double balance, double charge)
        : accountName(name), mobileNumber(mobile), balance(balance), chargeRate(charge) {}

    // Getters and Setters
    string getAccountName() const { return accountName; }
    void setAccountName(const string &name) { accountName = name; }

    string getMobileNumber() const { return mobileNumber; }
    void setMobileNumber(const string &mobile) { mobileNumber = mobile; }

    double getBalance() const { return balance; }
    void setBalance(double bal) { balance = bal; }

    double getChargeRate() const { return chargeRate; }
    void setChargeRate(double rate) { chargeRate = rate; }

    // Display Account Info
    void display() const {
        cout << "\n--- Nogod Account Details ---\n";
        cout << "Name: " << accountName << "\n";
        cout << "Mobile: " << mobileNumber << "\n";
        cout << "Balance: " << balance << " BDT\n";
    }

    // Check and Perform Payment
    bool canPay(double amount) const {
        double total = amount * chargeRate;
        return balance >= total;
    }

    double pay(double amount) {
        double total = amount * chargeRate;
        balance -= total;
        return total;
    }
};

// ====================== SSLCommerce Class ======================
class SSLCommerce : private BKash, private Nogod {
private:
    double sslCharge;

public:
    SSLCommerce()
        : BKash(), Nogod(), sslCharge(1.0) {}

    SSLCommerce(const string &bkashName, const string &bkashMobile, double bkashBalance, double bkashCharge,
                const string &nogodName, const string &nogodMobile, double nogodBalance, double nogodCharge,
                double sslCharge)
        : BKash(bkashName, bkashMobile, bkashBalance, bkashCharge),
          Nogod(nogodName, nogodMobile, nogodBalance, nogodCharge),
          sslCharge(sslCharge) {}

    void setSSLCharge(double charge) { sslCharge = charge; }
    double getSSLCharge() const { return sslCharge; }

    void makePayment(double amount, const string &method) {
        double totalWithSSL = amount * sslCharge;

        if (method == "BKash") {
            if (BKash::canPay(totalWithSSL)) {
                double paid = BKash::pay(totalWithSSL);
                cout << " BKash Payment Successful";
                cout << "Amount Paid: " << paid << " BDT\n";
                cout << "From: " << BKash::getMobileNumber() << "\n";
                cout << "Remaining Balance: " << BKash::getBalance() << " BDT\n";

                cout<<"Thanks From <Adnan Sami>"<<endl;
            } else {
                cout << " BKash Payment Failed! Insufficient Balance.\n";
            }
        }
        else if (method == "Nogod") {
            if (Nogod::canPay(totalWithSSL)) {
                double paid = Nogod::pay(totalWithSSL);
                cout << " Nogod Payment Successful!\n";
                cout << "Amount Paid: " << paid << " BDT\n";
                cout << "From: " << Nogod::getMobileNumber() << "\n";
                cout << "Remaining Balance: " << Nogod::getBalance() << " BDT\n";
            } else {
                cout << " Nogod Payment Failed! Insufficient Balance";
            }
        }
        else {
            cout << " Invalid Payment Method";
        }
    }
};

// ====================== Main Function ======================
int main() {
    string bkashName, bkashMobile, nogodName, nogodMobile;
    double bkashBalance = 50000, nogodBalance = 70000;
    double bkashCharge = 1.0, nogodCharge = 1.0, sslCharge = 1.012;

    cout << "Enter BKash Account Name: ";
    getline(cin, bkashName);
    cout << "Enter BKash Mobile Number: ";
    getline(cin, bkashMobile);

    cout << "\nEnter Nogod Account Name: ";
    getline(cin, nogodName);
    cout << "Enter Nogod Mobile Number: ";
    getline(cin, nogodMobile);

    SSLCommerce ssl(bkashName, bkashMobile, bkashBalance, bkashCharge,
                    nogodName, nogodMobile, nogodBalance, nogodCharge,
                    sslCharge);

    int choice;
    double bill;

    cout << "\n=== Choose Payment Method ===\n";
    cout << "1. BKash\n2. Nogod\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter billing amount: ";
    cin >> bill;

    string method = (choice == 1) ? "BKash" : (choice == 2) ? "Nogod" : "Invalid";
    ssl.makePayment(bill, method);

    return 0;
}
