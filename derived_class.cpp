#include<iostream>
using namespace std; 
class parent{
    public:
    void display(){
        cout<<"This is parent class";
    }
};
class child:public parent{                     //Derived class
    public:
    void show(){
        cout<<"\nThis is Child class";
    }
};
int main(){
    child obj;
    obj.display();
    obj.show();
    return 0;
}