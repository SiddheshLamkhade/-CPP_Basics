#include<iostream>
using namespace std;

inline void display(){
    cout<<"\nIn Inline function , function call is replaced by function body...";
    cout<<"\nIt is done by same as in static fun as by writing inline keyword before returntype...";
}
int main(){
    display();
    return 0;
}