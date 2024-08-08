#include <iostream>
using namespace std;
class A{
    friend class Ram; //Declaration of friend class inside another class to access private members of that class
    int a;            //private member of class A

};
class Ram{                      //This is that friend class
    public:
    void fun(int a){
        cout<<"\nThis is value of a which is: "<<a<<endl<<endl;
    
    }
};
int main(){
    cout<<"\n\nFriend class can access private member of another class."<<endl;
    cout<<"\nFor this it requires friend class should be declared first\n";
    Ram obj;
    obj.fun(21);
    return 0;
}
