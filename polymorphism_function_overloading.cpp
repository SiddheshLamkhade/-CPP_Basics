#include <iostream>
using namespace std;
void print(){
   cout<<"we defined same function with different data type function"<<endl;
}
void display(int a){                                   
   cout<<"value of a is int= "<<a;
}                                         /*Do not define function in main function 
                                              because this is already function*/

void display(double a){
   cout<<"value of a double= "<<a;
}

void display(float a){
   cout<<"value of a is float= "<<a;
}



 int main(){
    print();
    display(12.33);                 /*Call function in main function*/
    return 0;
 }
