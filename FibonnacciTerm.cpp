#include<iostream>
using namespace std;

int fib(int n){
    //int n;
    cout<<"Enter a number:";
    cin>>n;
    int a=0, b=1;
    int term;
    for(int i=3; i<=n; i++){
        term=a+b;
        a=b;
        b=term;
    }
    cout<<"The nth term is:"<<term<<endl;
}

int main(){
    int n;
    fib(n);
    return 0;
}