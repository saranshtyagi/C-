#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"The sum of given numbers is:"<<a+b<<endl;
}

int diff(int a, int b){
    if(a>b){
        cout<<"The difference of given numbers is:"<<a-b<<endl;
    }
    else{
        cout<<"The difference of given numbers is:"<<b-a<<endl;
    }
}

int mul(int a, int b){
    cout<<"The product of given numbers is:"<<a*b<<endl;
}

int div(float a, float b){
    cout<<"The division of given numbers is:"<<a/b<<endl;
}

int main(){
    int a, b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter another number:";
    cin>>b;

    char op;
    cout<<"Enter an operator:";
    cin>>op;

    switch(op){
        case '+':
           add(a,b);
           break;

        case '-':
           diff(a,b);
           break;

        case '*':
           mul(a,b);
           break;

        case '/':
           div(a,b);
           break;

        default:
           cout<<"Enter some another operator";
    }
    return 0;
}