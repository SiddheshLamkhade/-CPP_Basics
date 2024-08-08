#include<iostream>
using namespace std;
class sample{
    public:
    sample(){
        cout<<"\n This is Non parametrized constructor";

    }

    sample(int a, int b){
        cout<<"\n This is parametrized constructor";
    }
};
int main(){
    sample obj;                    //Here do not write any () for non parametrized cons. as it is object
    sample obj2(45,44);            //////////IMP HERE See how I given parameters to Object Even this is 
                                   //Object
    
    return 0;
}