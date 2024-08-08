#include<iostream>
using namespace std;
int main(){
    int var=300;
    int &xyz=var;
    cout<<"Value of var is: "<<var<<endl<<"Value of xyz is: "<<xyz<<endl<<endl;
    xyz=199;
    cout<<"Value of var is: "<<var<<endl<<"Value of xyz is: "<<xyz;
    return 0;
    }