#include<iostream>
using namespace std;
class sample{
    public:
    sample(){
        cout<<"\n\tconstructor is called.";
    }
    ~sample(){                              //Destructor is used to destoy objects of class
                                            //So here obj is deleted.
        cout<<"\n\tdestructor is called";
    }
};
int main(){
    sample obj;
    return 0;
}