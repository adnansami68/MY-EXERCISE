#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l = 0, int w = 0) {
        length = l;
        width = w;
    }

    // Setters
    void setLength(int l) {
        length = l;
    }

    void setWidth(int w) {
        width = w;
    }

    void set(int l, int w) {  // set both length and width
        length = l;
        width = w;
    }

    // Getters
    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    // Area
    int calculate_area() {
        return length * width;
    }


    int calculate_perimeter() {
        return 2 * (length + width);
    }


    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculate_area() << endl;
        cout << "Perimeter: " << calculate_perimeter() << endl << endl;
    }
};

int main() {
    Rectangle r1(2, 3), r2;
    r2.set(5, 6);

    r1.display();
    r2.display();

    return 0;
}
