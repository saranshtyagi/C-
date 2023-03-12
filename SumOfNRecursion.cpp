//Parametreised way to find sum of n natural numbers using recursion

#include<iostream>
using namespace std;

void sum(int i, int sum1){
    if(i<1){  // if base case is true then this block is executed
        cout<<"Sum is:"<<sum1;
        return;
    }
    sum(i-1, sum1+i); // till base case is false, i=n(initial) will decrement by 1 and i will add up to sum1 in each iteration
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    sum(n,0);
    return 0;
}