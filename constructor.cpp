#include<iostream>
using namespace std;

class example{               
    public:                   //constructor must be declared in public mode.
    example(){         //constructor name must same as class name & do not give any return type to con.
        cout<<"This is Constructor"<<endl;
    }
};

int main(){
    example obj;           //We donot call constructor it gets automatically called.
                           //Here last time I was written as ->example obj(); so it was showing error
    cout<<"Constructor Program";
    return 0;
}