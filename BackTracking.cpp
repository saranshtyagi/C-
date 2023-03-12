// To print n,n-1,....,3,2,1 using recursion but not by i-1 approach

#include<iostream>
using namespace std;

void linear(int i, int n){
    if(i>n){
        return;
    }
    linear(i+1, n);
    cout<<i<<" "; 
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    linear(1,n);
    return 0;
}