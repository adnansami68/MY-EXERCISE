#include<iostream>
using namespace std;

int main(){
    int marks[2];

    try{
        cout<<"Enter marks of subjects:"<<endl;
    
    for(int i=0 ; i<3 ;i++){
       cin>>marks[i];

       if(marks[i]<0 || marks[i]>100){
            throw "invalid marks";

       }
}
     cout<<"Marks Entered Successfully"<<endl;
}
    catch(const char* error){
        cout<<"Error: "<<error<<endl;
    }
    return 0;
}
