#include <iostream>
int main(){
    int a=1;                     //SEE HOW I Assigned values for variables
    int b=2;
    //a=1;                       //Don,t assign values for variables like this be

    int c;                       
    c=a+b;

    std::cin>>a;                     //Without "using namespace std;"
    std::cin>>b;
    std::cout<<c<<"";
    std::cout<<"---This is the Sum";
    return 0;
}