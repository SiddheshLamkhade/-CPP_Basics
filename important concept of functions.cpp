#include<iostream>
using namespace std;

int fun(int a, int b){
    int c;
    c=a+b;
    return c;
}

void voidfun(int a, int b){
    int c;
    c=a+b;
    cout<<c;
}

int main(){
    int k,m,f;
    k=3;
    m=5;
    f=fun(k,m);
    cout<<"\n"<<f<<"\n"<<"this is output by storing return value of function\n\n";
    voidfun(4,5);
    cout<<"\n"<<"this will be the output of the void fun by direct calling"<<endl<<endl;
    return 0;
}