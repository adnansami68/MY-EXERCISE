#include<iostream>
using namespace std;

template<class Temp>

class Box{
    Temp length ,weight , height;
    public:
       Box(Temp l , Temp w , Temp h){
              length = l;
              weight = w;
              height = h;
       }
         Temp volume(){
                  return length * weight * height;
         }

    };
    int main(){
        Box<int> b1(3 , 4 , 7);
        Box<float> b2(3.2 , 2.5 , 8.4);

        cout<<"Volume of Int:"<<b1.volume()<<endl;
        cout<<"Volume of float:"<<b2.volume()<<endl;

        return 0;
    }

