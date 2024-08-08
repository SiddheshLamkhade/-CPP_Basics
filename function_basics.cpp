#include<iostream>
using namespace std; 

/*int fun(int a,int b);*/ //This is fun declaration not need if defining is done above the main fun

int fun(int a, int b){    
    int c;                    //Always define function outside the main function
    c=a+b;                   //Because it is already a function 
    return c;                 //Only for calling purpose use main function
}                           // We donot terminate functions as we know same for main() fun
     
int main(){
    int a=20,b=10,c;             //Call the userdefined functions here...
    
    c=fun(a,b);
    cout<<"Addition is: "<<c;
    return 0;
}