#include<iostream>
using namespace std;

class Customer {
public:
    string customerName;
    string phoneNumber;  // phone number should be string
};

class Product {
public:
    string productName;
    string productID;    // spelling corrected (productID)
};

class Store {
public:
    string storeName;
    string storeLocation;
};

class OrderInfo : public Customer, public Product, public Store {
public:
    int quantity;
    string orderDate;

    void showOrder() {
        cout << "...............Order Info................" << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Store Name: " << storeName << endl;
        cout << "Store Location: " << storeLocation << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Order Date: " << orderDate << endl;
    }
};

int main() {
    OrderInfo o;

    o.customerName = "Adnan Sami";
    o.phoneNumber = "01716618150";            // string
    o.productName = "iPhone 17 Pro Max";
    o.productID = "IOS24";
    o.storeName = "Applex BD";              // 'O' → 'o' fixed
    o.storeLocation = "Dhaka, Bangladesh";
    o.quantity = 1;
    o.orderDate = "10-09-2032";

    o.showOrder();

    return 0;   // should return 0, not 'o'
}
