#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter another number:";
    cin>>b;
    for(int num=a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){
            if(num%i==0){
                cout<<"Non prime: "<<num<<endl;
                break;
            }
        }
        if(i==num){
            cout<<"Prime: "<<num<<endl;
        }
    }
    return 0;
}