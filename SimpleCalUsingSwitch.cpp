#include<iostream>
using namespace std;

int main(){
    float n1, n2;
    cout<<"Enter a number:";
    cin>>n1;    
    cout<<"Enter another number:";
    cin>>n2;

    char op;
    cout<<"Operators: +,-,*,/"<<endl;
    cout<<"Enter an operator:";
    cin>>op;

    switch(op){
        case '+':
            cout<<"Sum of given numbers:"<<n1+n2<<endl;
            break;
        case '-':
            if(n1>n2){
                
                cout<<"Difference of given numbers:"<<n1-n2<<endl;
                break;
            }
            else{
                
                cout<<"Difference of given numbers:"<<n2-n1<<endl;
                break;
            }

        case '*':
            
            cout<<"Product of given numbers:"<<n1*n2<<endl;
            break;

        case '/':
            if(n1>n2){
                
                cout<<"Division of given numbers:"<<n1/n2<<endl;
                break;
            }  
            else{
                
                cout<<"Division of given numbers:"<<n2/n1<<endl;
                break;
            }
        default:
            cout<<"Enter another operator"<<endl;
            break;
                
    }
    return 0;
}