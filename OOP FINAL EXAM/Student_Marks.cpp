#include<iostream>
using namespace std;

class Student {
private:
    int marks[3]; 

public:
    
    void inputMarks() {
        cout << "Enter marks of 3 subjects:" << endl;
        
        for(int i = 0; i < 3; i++) {
            cin >> marks[i];

            
            if(marks[i] < 0 || marks[i] > 100) {
                throw "Invalid marks!";
            }
        }
        cout << "Marks Entered Successfully" << endl;
    }
};

int main() {
    
    Student s1;

    try {
       
        s1.inputMarks();
    }
    catch(const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}
