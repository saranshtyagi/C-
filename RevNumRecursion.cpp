#include<iostream>
using namespace std;

void rev(int n){
    if(n<10){
        cout<<n;
        return;
    }
    cout<<n%10;
    rev(n/10);
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The reversed number is: ";
    rev(n);
    return 0;
}