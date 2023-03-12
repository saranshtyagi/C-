#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int count=0; //Initialising a variable 'count' which will store the count of digit and update after each iteration.
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<"The number of digits in your entered number"<<" are: "<<count;
    return 0;
}