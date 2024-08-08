#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"\n\nThis display() function from class A"<<endl;
    }
};
class B{
    public:
    void display(){
        cout<<"\nThis is display() function from class B\n\n\n";
    }
};
class child:public A,public B{
    public:
    child(){
        cout<<"\n\nThis is derived class which is multiply inherited"<<endl;
        cout<<"compiler faces ambuguity means problem to decide which should be called if two functions have same name in base classes";
        }
};
int main(){
    child obj;
    //obj.display();
                         //New syntax...
    obj.A::display();
    obj.B::display();
    return 0;
}