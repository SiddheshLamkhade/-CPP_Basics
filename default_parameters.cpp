                                          //error
#include<iostream>
using namespace std;
void fun(const int a=20,const float b=23.34);
void fun1(int k, const float s=12.3);

int main(){
    cout<<"First function with All 2 Default Parameters";
    fun();
    cout<<"Second function with Only one default parameter";
    fun1(3);
    return 0;
};

void fun(const int a=20, const float b=23.34){
    cout<<a<<"  "<<b<<endl;
}
void fun1(int k, const float s=12.3){
    cout<<k<<"  "<<s<<endl;
    }