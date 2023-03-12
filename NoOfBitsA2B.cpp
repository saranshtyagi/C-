#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter another number:";
    cin>>b;
    int res=a^b;
    int count=0;
    while(res>0){
        res=res&(res-1);
        count++;
    }
    cout<<"Number of bits to change: "<<count;
    return 0;
}