#include<iostream>
using namespace std;
class parent{                                    //Class
    public:                                      //----
    int a,b,c;                                   
    void add(int a, int b){
        int c;
        c=a+b;
        cout<<c<<endl;
        }
};
class child:public parent{                  //where, when we called this add() function then it called in the derived class.
    public:
    /*void add(int a, int b){
       c=a-b;
       cout<<c;
    }*/
};

int fun(int a, int b){
    int c;
    c=a*b;
    cout<<c;
}

int main(){
   //int a,b,c;
    child obj;
    obj.add(2,5);
    int a=45;
    int b=45;
    fun(a,b);

    return 0;
}