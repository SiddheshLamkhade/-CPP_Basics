#include<iostream>
using namespace std;

class base{
    public: 
    int i;

};
//...............................................................................................................
class derive1:virtual public base{            //here i have one copy of int i
    public:
    int j;

};
class derive2:virtual public base{            //here also i have one copy of int i
    public:
    int k;
};
//.................................................................................................................
class child:public derive1, public derive2{               //here , i got two copies of int i from derive1 and derive 2
    public:                                               //But bcause i have used virtual keyword before inheriting god base class
    int sum(){                                            //it won't show error.....
        return i+j+k;

    }
};

int main(){
    child obj;
    obj.i=10;
    obj.j=20;
    obj.k=30;
    cout<<endl<<endl<<"Sum is: "<<obj.sum()<<endl<<endl;
    return 0;
}