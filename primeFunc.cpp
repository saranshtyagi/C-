#include<iostream>
using namespace std;

int prime(int n){
    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    prime(n);
    return 0;
}