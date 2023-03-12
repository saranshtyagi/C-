#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, arm=0;
    cout<<"Enter a number:";
    cin>>n;
    int x=n;
    while(n!=0){
        int a=n%10;
        arm=arm+(a*a*a);
        n=n/10;
    }
    if(arm==x){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }
    return 0;
}