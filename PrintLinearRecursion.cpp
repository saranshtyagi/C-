#include<iostream>
using namespace std;

void linear(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    linear(i+1, n);
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    linear(1,n);
    return 0;
}