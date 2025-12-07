#include<iostream>
using namespace std;

template<class Temp>
class Box{
    Temp length , width , height;

    public:
    Box(Temp length, Temp width, Temp height){
        this->length = length;
        this->width = width;
        this->height = height;
    }
    Temp volume(){
        return length * width * height;
    }
};
int main(){
        Box<int> b1(3 , 4 , 7);
        Box<float> b2(3.2 , 2.5 , 8.4);

        cout<<"Volume of Int:"<<b1.volume()<<endl;
        cout<<"Volume of float:"<<b2.volume()<<endl;

        return 0;
    }
