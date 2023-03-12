#include<iostream>
#include<math.h>
using namespace std;

int main(){ 
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int num=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        num=(num*10)+digit;
        n=n/10;
    }
    cout<<"The reversed of your entered number is:"<<num<<endl;
    return 0;
}
