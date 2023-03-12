#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n; j++){
            if(j>=n-1-i && j<=n-1+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=0; j<2*n; j++){
            if(j>n-1-i && j<n-1+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}