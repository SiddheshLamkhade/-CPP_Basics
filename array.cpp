#include<iostream>
using namespace std;
int main(){
    int k=0;
    int arr[10]={3,4,2,5,6,32,3,2,3,5};

    for(int i=0; i<10 ;i++){
        cout<<k<<"  index element is: "<<arr[k]<<endl;   //....Because arr[index]  Here value of k changes so index changes
        k++;  
    }

cout<<"...............................Stings.................."<<endl;
char strings[30]="Amar Abhang";
cout<<"Name is: "<<strings;

    return 0;
}