#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter ith bit to clear:";
    cin>>i;
    int mask=~(1<<i);
    int res=n&mask;
    cout<<"Number after clearing ith bit:"<<res;
    return 0;
}