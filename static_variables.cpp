#include<iostream>
using namespace std;
void fun(){
    //int a=0;             //check this by removing comment i.e. without static keywords
    static int a=0;
    cout<<"\nvalue of a: "<<a;
    a++;
}
int main(){
    for (int i=0;i<5;i++){
        fun();
    };
    
    cout<<"\n\n.........Static variable is created to make Variable act like a global variable.......";
    cout<<"\n\n.........Only one copy of variable is created in entire program and same copy is used by all.......";
    return 0;
}