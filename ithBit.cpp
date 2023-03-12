#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter position at which bit has to be found out:";
    cin>>i;
    int mask=1<<i;
    n=n&mask;
    if(n==0){
        cout<<"0";
    }
    else{
        cout<<"1";
    }
    return 0;
}