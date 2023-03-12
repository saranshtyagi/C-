#include<iostream>
using namespace std;

void back(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<" ";
    back(i-1,n);
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    back(n,n);
    return 0;
}