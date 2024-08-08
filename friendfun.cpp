#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    friend int fun();               //friend fun declaration in class...
};

int fun(){                        //fun definition is outside the class. But it can access private members of class.
    cout<<"\n\nAddition with the help of friend function by accessing";
    cout<<" private members of class without not being part of that class...\n\n";
}

int main(){
    fun();
}