#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string id;
    double cgpa;

public:
    Student() {
        name = "";
        id = "";
        cgpa = 0.0;
    }

    Student(string name, string id, double cgpa) {
        this->name = name;
        this->id = id;
        this->cgpa = cgpa;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getId() {
        return id;
    }

    void setId(string id) {
        this->id = id;
    }

    double getCgpa() {
        return cgpa;
    }

    void setCgpa(double cgpa) {
        this->cgpa = cgpa;
    }

    virtual void func() {
        cout << "ID: " << this->id << ", Name: " << this->name << ", CGPA: " << this->cgpa << endl;
    }
};

class ScienceStudent : public Student {
private:
    string labCourse;
    string laptop;

public:
    ScienceStudent(string name, string id, double cgpa, string labCourse, string laptop)
        : Student(name, id, cgpa) {
        this->labCourse = labCourse;
        this->laptop = laptop;
    }

    string getLaptop() {
        return this->laptop;
    }

    void setLaptop(string laptop) {
        this->laptop = laptop;
    }

    string getLabCourse() {
        return this->labCourse;
    }

    void setLabCourse(string labCourse) {
        this->labCourse = labCourse;
    }

    void study() {
        cout << getName() << " (Science Student, " << getLabCourse()
             << ") is studying using laptop: " << this->laptop << "..." << endl;
    }

    void func(){
        cout << "Science Student -> Name: " << getName()
             << ", ID: " << getId()
             << ", CGPA: " << getCgpa()
             << ", Lab Course: " << this->labCourse
             << ", Laptop: " << this->laptop << endl;
    }
};

class CSEStudent : public ScienceStudent {
private:
    string laptop;

public:
    CSEStudent(string name, string id, double cgpa, string labCourse, string laptop)
        : ScienceStudent(name, id, cgpa, labCourse, laptop) {
        this->laptop = laptop;
    }

    void study() {
        cout << getName() << " (CSE Student) is coding in "
             << getLabCourse() << " using " << this->laptop << "..." << endl;
    }

    void func(){
        cout << "CSE Student -> Name: " << getName()
             << ", ID: " << getId()
             << ", CGPA: " << getCgpa()
             << ", Lab Course: " << getLabCourse()
             << ", Laptop: " << this->laptop << endl;
    }
};

int main() {
    Student ob1("Adnan Sami", "20255103068", 3.50);
    ob1.func();

    Student ob2("Jahid Hasan", "20255103049", 3.50);
    ob2.func();

    CSEStudent ob3("Jahid Hasan", "20255103049", 3.75, "Computer Lab", "Asus Zenbook");
    ob3.func();
    ob3.study();

    ScienceStudent ob4("Shimul Islam", "20255103060", 3.80, "Physics Lab", "Asus ExpertBook");
    ob4.func();
    ob4.study();

    return 0;
}
