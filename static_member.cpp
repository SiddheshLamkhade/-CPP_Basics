#include<iostream>
using namespace std;
class sample{
    public:
    static void funstat(){
        cout<<"\nThis is Static function...\n\n\n";
    }
};
int main(){
    cout<<"\nstatic function is not depend on any particular object\n";
    cout<<"\nWe can call static function even if object is not created...\n";
    cout<<"\nsyntax for calling:- classname::functionname();\n";
    sample::funstat();
    return 0;
}