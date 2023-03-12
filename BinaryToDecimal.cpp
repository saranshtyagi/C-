#include<iostream>
using namespace std;

int main(){
    int n, decimal=0,rem, i=1;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0){
        rem=n%10;
        decimal=decimal+rem*i;
        i*=2;
        n=n/10;
    }
    cout<<"The decimal number is:"<<decimal;
    return 0;
}