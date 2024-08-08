#include<iostream>
using namespace std;

class myclass{
    int a=3,b=45,c=24;
    public:
    void display();
};

//void display(){ }             As this member function is outside the class.

void myclass::display(){
    cout<<"\nBy using Scope resolution operator we can access member fun outside the class."<<endl;
    cout<<"And it can access private members of class."<<endl;
    cout<<"As it is declared in class.\n\n"<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}
int main(){
    myclass obj;
    obj.display();
    return 0;
}