#include<iostream>

using namespace std;

int main() {

    int num;

    cout<<"Enter a number: ";
    cin>>num;

    int a, fact=1;

    for (a=num; a>0; a--) {

        fact=fact*a;

    }
    cout<<"The factorial number is: "<<fact;

    return 0;

}