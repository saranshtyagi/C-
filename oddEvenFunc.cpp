#include<iostream>
using namespace std;

int oddEven(int a){
    if(a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}


int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    oddEven(a);
    int b;
    cout<<"Enter a number:";
    cin>>b;
    oddEven(b);
    return 0;
}