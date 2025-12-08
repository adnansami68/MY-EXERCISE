#include<iostream>
using namespace std;

class Employee{
    protected:
        string employeeName;
        string employeeID;
    public:
        Employee(string employeeName , string employeeID){
              this->employeeName = employeeName;
              this->employeeID = employeeID;
       }    
    void setemployeeName(string employeeName){
            this->employeeName = employeeName;
        }
    string getemployeeName(){
            return this->employeeName;
        }
    void setemployeeID(string employeeID){
            this->employeeID = employeeID;
        }
    string getemployeeID(){
            return this->employeeID;            
    }
    ~Employee(){}
};

class Department : public Employee{
    protected:
        double basicSalary;
        string shift;
    public:
        Department(string employeeName , string employeeID , double basicSalary , string shift)
        :Employee(employeeName , employeeID){
            this->basicSalary = basicSalary;
            this->shift = shift;
        }    
    void setbasicSalary(double basicSalary){
            this->basicSalary = basicSalary;
        }
    double getbasicSalary(){
            return this->basicSalary;
        }
    void setshift(string shift){
            this->shift = shift;
        }
    string getshift(){
            return this->shift;
    }
    double calculateSalary(){
        if (shift == "night" || shift == "Night"){
            return basicSalary + (0.1 * basicSalary);
        }
        else{
            return basicSalary;
        }
    }
    ~Department(){}
};

class Payroll : public Department {
public:
    Payroll(string employeeName, string employeeID, double basicSalary, string shift) 
        : Department(employeeName, employeeID, basicSalary, shift) {}

    void displayProfile() {
        cout << "........Employee Payroll Profile........" << endl;
        cout << "Name: " << getemployeeName() << endl;
        cout << "ID:   " << getemployeeID() << endl;
        cout << "Shift: " << this->shift << endl;
        cout << "Basic Salary: " << this->basicSalary << endl;
        
        cout << "Total Salary: " << calculateSalary() << endl;
        
        if (this->shift == "Night" || this->shift == "night") {
            cout << "(Includes 10% Night Shift Bonus)" << endl;
        }
    }
    ~Payroll() {}
};

int main(){
    Payroll p1("Adnan Sami", "20255103068", 50000, "Night");
    p1.displayProfile();
    return 0;
}
