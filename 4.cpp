#include<Iostream>
using namespace std;

class Employee{
    public:
        string employeeName;
        string employeeID;

};

class Department: public Employee{
    public:
        string departmentName;
        int departmentCode;

};
int main(){
    Department d;

    d.employeeName="Adnan Sami";
    d.employeeID="20255103068";
    d.departmentName="CSE";
    d.departmentCode=112;

    cout<<"Employee Name: "<<d.employeeName<<endl;
    cout<<"Employee ID:"<<d.employeeID<<endl;
    cout<<"Department Name:"<<d.departmentName<<endl;
    cout<<"Department Code:"<<d.departmentCode<<endl;

    return 0;

}