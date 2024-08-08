#include<iostream>
using namespace std;
class sample{
    public:
    sample(){
        cout<<"\nThis is base class 1\n";
    }
};
class example{
    public:
    example(){
        cout<<"This is base class 2\n";
    }
};
class derived:public sample,public example{
    public:
    derived(){
        cout<<"This is derived class and we're creating object for it\n\n";
    }
};
int main(){
    derived obj;
    return 0;
}