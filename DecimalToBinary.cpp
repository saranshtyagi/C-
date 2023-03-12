//WAP to convert a decimal number into binary and also calculate the sum of digits in binary number

#include<iostream>
using namespace std;

int main(){
    int n, remainder, i=1, sum=0;
    cout<<"Enter a number:";
    cin>>n;
    long binaryNum=0;

    while(n!=0){
        remainder=n%2;
        sum=sum+remainder;
        n=n/2;
        binaryNum=binaryNum + remainder*i;
        i*=10;
    }
    cout<<"The binary number is: "<<binaryNum<<endl;
    cout<<"Sum: "<<sum;
    return 0;
}