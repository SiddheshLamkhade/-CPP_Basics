#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    int y;
    public:
    void display(int x){
        cout<<x<<endl;
    }
};
class B:public A{
    protected:
    int z;
    public:
    void show(int y){
        cout<<y<<endl;
    }
};
class C:public B{
    public:
    void print(int z){
        cout<<z<<endl;
    }
};
int main(){
    int x=34,y=355,z=42;
    C obj;
    obj.print(x);               //Calling........
    obj.show(y);
    obj.display(z);
    
    }




