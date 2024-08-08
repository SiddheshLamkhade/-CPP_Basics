#include <iostream>         //1. Header file declaration section
#define max 100, min 200;                                   //Costants in C++    Value of Constants Cannot be Changed...
using namespace std;

                
int a=16;                    //2. Global Declaration Section
int b=24;


class Example{               //3. Class Declaration section
     const double x=3.14;                                   //Costants in C++    Value of Constants Cannot be Changed...          
     public:
     void show(){             //4. Function Definition Section
        cout<<"\n\nThese are global variable: "<<"\n"<<"\n"<<a<<"\n"<<"\n"<<"and"<<"\n"<<"\n"<<b<<"\n\nand constant is: "<<x;
     }
};

int main(){                  //5. Main Function
    cout<<"Here, Only We should create obj and call all functions in the Program";
    Example obj;
    obj.show();
    return 0;
}