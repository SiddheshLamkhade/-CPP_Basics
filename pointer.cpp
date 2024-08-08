#include <iostream>
using namespace std;
int main(){
    int a=12;


    int *ptr;        //First We have to declare pointer before its use...
    ptr=&a;


    cout<<"\nValue of variable a by a is: "<<a<<endl;
    cout<<"\nValue of variable a by using pointer *ptr Is: "<<*ptr<<endl;
    cout<<"\nValue of address(memory location) of a by ptr is : "<<ptr<<endl;
    cout<<"\nValue of address(memory location) of a using & operator is : "<<&a<<endl<<" \n\n";
    return 0;
}