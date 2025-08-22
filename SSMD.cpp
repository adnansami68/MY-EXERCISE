#include<iostream>
using namespace std;

int add(int a , int b) {
    return a + b;
}
inline int add1(int a , int b) {
    return a +b;
}

int sub (int a , int b) {
    return a-b;
}
inline int sub1 (int a , int b) {
    return a - b;
}

int mul (int a ,int b) {
    return a*b;
}

inline int mul1 (int a , int b) {
    return a*b;
}

int divides(int a , int b) {
    return a/b ;
}
inline int div1 (int a , int b) {
    return a/b;
}

int main() {
   int a , b;
    cout<< "enter two numbers" <<endl;
    cin>>a>>b;
    cout<<add (a , b)<< endl;
    cout <<add1( a , b)<<endl;
    cout<<sub(a , b)<< endl;
    cout <<sub1 (a , b)<<endl;
    cout<<mul (a , b)<<endl;
    cout<<mul1 (a , b)<<endl;

    cout<<div1 (a , b)<<endl;

    return 0;


}
