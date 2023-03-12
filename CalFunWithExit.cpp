#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"The sum of given numbers is:"<<a+b<<endl;
}

int sub(int a, int b){
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

int div1(int a, int b){
    cout<<"The division of given numbers is:"<<a/b<<endl;
}

int main(){
    char ch;

    while(ch!='N'){
        
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
               sub(a,b);
               break;
            case '*':
               mul(a,b);
               break;
            case '/':
               div1(a,b);
               break;
        }
        cout<<"Whether to continue or not?(Y/N):";
        cin>>ch;
        if(ch=='N'){
            break;
        }
    }

    return 0;
}