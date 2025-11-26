#include<iostream>
using namespace std;

int main(){

    int marks[3];

    try{
        cout<<"Enter marks of 3 subjects:"<<endl;
    
    for(int i=0 ; i<3 ; i++){
        cin>>marks[i];

    if(marks [i] <0 || marks [i] >100){
        throw "Invalid Marks" ;
    
    }    

}   
    cout<<"Marks Entered Successfully"<<endl;
    }
    catch(const char* error){
        cout<<error<<endl;
    }  
    
    return 0;
     
}