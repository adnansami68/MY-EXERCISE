#include<iostream>

using namespace std;

class Human {

private:

    string name;
    string id;
    string color;
    double height;
    double weight;

public:
    // Constructor:
    Human(string n, string i, string c, double h, double w) {
        name = n;
        id = i;
        color = c;
        height = h;
        weight = w;
    }

    // Setters & Getters:

    void setname(string n) {
        name = n;
    }
    string getname() {
        return name;
    }

    void setid(string i) {
        id = i;
    }
    string getid() {
        return id;
    }

    void setcolor(string c) {
        color = c;
    }
    string getcolor() {
        return color;
    }

    void setheight(double h) {
        height = h;
    }
    double getheight() {
        return height;
    }

    void setweight(double w) {
        weight = w;
    }
    double getweight() {
        return weight;
    }
};

int main() {
    Human person("Adnan Sami", "20255103068", "Black", 180.0, 80.0);
    cout << "Name: " << person.getname() << endl;
    cout << "ID: " << person.getid() << endl;
    cout << "SkinTone: " << person.getcolor() << endl;
    cout << "Height: " << person.getheight() << endl;
    cout << "Weight: " << person.getweight() << endl;

    
    return 0;
}
