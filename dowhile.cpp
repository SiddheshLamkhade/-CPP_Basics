#include<iostream>
using namespace std;
int main(){
    int i=0,k=1;
    do{
        cout<<"do while loop iterations are: "<<k<<endl;
        k=k+1;
        i++;                     //i.e. i=i+1
    }    
    while(i<5);
    return 0;
}