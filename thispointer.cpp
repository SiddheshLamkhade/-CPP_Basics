#include <iostream>
using namespace std;
class exa{
    int c;
    public:
    exa(int c){
        //c=10;            //normal definition 
        this->c=10;        //with "this pointer" it points to current value in class.
        cout<<"\nThe value of c passed by object is :"<<c<<endl;
        cout<<"The value of c in this class : "<<this->c<<endl<<endl;

    }
};
int main(){
    cout<<"\n\nIf two variables names are same that time we can use this-> pointer to differentiate between variables."<<endl;
    cout<<"\nIt is keyword that   refers to current instance of class..."<<"\n\n";
    exa obj(300);
    return 0;
}