#include<iostream>
using namespace std;

class Customer{
    protected:
    string customerName;
    string phoneNumber;

    public:
    
    Customer(string name, string phoneNumber){ 
        this->customerName = name;
        this->phoneNumber = phoneNumber; 
    }
    string getcustomerName(){
        return this->customerName;
    }
    void setcustomerName(string name){
        this->customerName = name;
    }
    string getphoneNumber(){
        return this->phoneNumber;
    }
    void setphoneNumber(string phoneNumber){
        this->phoneNumber = phoneNumber;
    }
    ~Customer(){}
};

class Product{
    protected:
    string productName;
    string productID;

    public:
    Product(string productName ,  string productID){
        this->productName = productName;
        this->productID = productID;
    }

    string getproductName(){
        return this->productName;
    }

    void setproductName(string productName){
        this->productName=productName;
    }
    
    string getproductID(){
        return this->productID;
    }

    void setproductID(string getproductID){
        this->productID = getproductID; 
    }
    ~Product(){}
};

class Store{
    protected:
    string name;
    string location;

    public:
    Store(string name , string location){
        this->name = name; 
        this->location = location;
    }
    string getname(){
        return this->name;
    }
    void setname(string name){
        this->name=name;
    }
    string getlocation(){
        return this->location;
    }
    void setlocation(string location){
        this->location=location;
    }
    ~Store(){}
};

class OrderInfo :public Customer , public Product , public Store{
    protected:
    string quantity;
    string orderDate;

    public:
    OrderInfo(string customerName, string phoneNumber, string productName, string productID, string storeName, string storeLocation, string orderID, string orderDate)
    :Customer(customerName, phoneNumber), Product(productName, productID), Store(storeName, storeLocation){
        this->quantity = orderID;
        this->orderDate = orderDate;
    }

    string getorderID(){
        return this->quantity;
    }
    void setorderID(string orderID){
        this->quantity=orderID;
    }
    string getorderDate(){
        return this->orderDate;
    }
    void setorderDate(string orderDate){
        this->orderDate=orderDate;
    }

    void showOrder(){
        cout<<"................Order Information:................."<<endl;
        cout << "Customer Name: " << this->customerName << endl;
        cout << "Phone Number: " << this->phoneNumber << endl; 
        cout << "Product Name: " << this->productName << endl;
        cout << "Product ID: " << this->productID << endl;
        cout << "Store Name: " << this->name << endl;   
        cout << "Store Location: " << this->location << endl;
        cout << "Order Quantity: " << this->quantity << endl;
        cout << "Order Date: " << this->orderDate << endl;
    }
    ~OrderInfo(){}
};

int main(){
    OrderInfo order("Adnan Sami","01716618150","Laptop","Asus Zenbook","Ryans","IDP","01","08-12-2025");
    order.showOrder();
    return 0;
}
