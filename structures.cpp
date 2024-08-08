#include <iostream>
using namespace std;

struct mystructure{                            //Stuctures in CPP
    int roll;
    char name;
    float fl;
    double dl;
    long int it;
};

int main(){
    cout<<"\n\nAlways call structure in main function"<<endl;
    struct mystructure s;                    //Accessing Structures by Syntax: struct structurename structurevariable;
    s.roll=12;
    s.name='k';
    s.fl=3.14;
    s.dl=3.1423380283243;
    s.it=342424;
    cout<<endl<<"roll no. is "<<s.roll<<endl<<"name is: "<<s.name;
    cout<<endl<<"float is: "<<s.fl<<endl<<"double is: "<<s.dl<<endl<<"long int is: "<<s.it<<endl;
    return 0;
}