#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int a=0;
    int b=1;
    int nextNum;
    cout<<"The fibbonacci series upto your entered number is:";
    cout<<a<<","<<b<<",";
    for(int i=1; i<=n;i++){
        nextNum=a+b;
        a=b;
        b=nextNum;
        cout<<nextNum<<",";
    }
    return 0;
}