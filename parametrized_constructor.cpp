#include<iostream>
using namespace std;
class construct{
    public:                      //public mode is compulsory
    construct(int a, int b){     //parametrized constructor & Don't write any return value to con. fun
    cout<<"This output is by constructor ";
    cout<<"\nParameters are : "<<a<<"      "<<b;
    }
};
int main(){
    construct obj(23,43);
    return 0;
}