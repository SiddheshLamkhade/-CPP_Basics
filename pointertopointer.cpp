#include<iostream>
using namespace std;
int main(){
    int a=10;
    
    int *p;
    p=&a;
    int **newptr;                 //pointer to pointer is done by **
    newptr=&p;
    cout<<"\nhere we stored address of pointer p in newptr with syntax **newptr "<<newptr<<endl;
    cout<<"\nto store address of another pointer we shoud use **\n\n";
    return 0;
}