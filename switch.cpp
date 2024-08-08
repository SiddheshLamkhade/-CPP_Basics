#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter your Choice: ";
    cin>> choice;

    switch (choice)
    {
    case 1:
        cout<<"Entered choice is: One";
        break;
    case 2:
        cout<<"Entered choice is: Two";
        break;
    case 3:
        cout<<"Entered choice is: Three";
        break;
    default:
    cout<<"\n Greater than 3";
        break;
    }
    return 0;
}