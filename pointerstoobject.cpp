#include<iostream>
using namespace std;

class exam{
    public:
    int a=12;
    void display(){
        cout<<" value of a is   "<<a<<endl;
    }
};

int main(){
    cout<<"\nIt is recommended to use indirection operator -> instead of . dot operator to access elements of class";
    exam obj;
    exam *p;
    p=&obj;
    cout<<endl<<"using indirection operator : "<<endl;
    p->display();
    cout<<"using dot operator : "<<endl;
    (*p).display();
    return 0;
}