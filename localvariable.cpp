#include<iostream>
using namespace std;
int c=2;
int main(){
     int c=200;
     cout<<"\n\nAs we have same local and global variable then local variable"; 
     cout<<" will be accessed first as it is in that function...";
     cout<<"\n\tThis is value of local variable: "<<c;
     cout<<"\n\tThis is value of global variable: "<<::c;
     return 0;
}