#include <iostream>
using namespace std;
class A{
    public:
    class Nested{
        public:
        int num;
        void fun(){
            cout<<"\nThis is the Nested Class ...\n";
        }

    };
};
int main(){
    cout<<"\nNested Classes can access data member of outside class.. ";
    A::Nested obj;
    obj.fun();
    return 0;
}