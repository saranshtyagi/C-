#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"enter:";
    cin>>a;
    cout<<"enter:";
    cin>>b;
    int sum=a+b;
    cout<<sum<<endl;
    int diff=0;
    if(a>b){
        diff=a-b;
        cout<<diff;
    }
    else{
        diff=b-a;
        cout<<diff;
    }

    return 0;
}