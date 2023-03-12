#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, firstDigit, lastDigit, swappedNum, digits, power;
    cout<<"Enter a number:";
    cin>>n;
    digits=(int)log10(n)+1;
    power=digits-1;
    
    lastDigit=n%10;
    firstDigit=(int)n/(pow(10, power));
    
    swappedNum=lastDigit;
    swappedNum*=(int)round(pow(10, power));
    swappedNum+=n%((int)round(pow(10, power)));
    swappedNum-=lastDigit;
    swappedNum+=firstDigit;
    
    cout<<"The swapped number is: "<<swappedNum;
    return 0;
}