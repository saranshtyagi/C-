#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter ith bit to set:";
    cin>>i;
    int mask=1<<i;
    n=n|mask;
    cout<<"Number after setting ith bit is "<<n;
    return 0;
}