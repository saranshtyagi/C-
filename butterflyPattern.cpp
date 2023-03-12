#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<2*n; j++){
            if(j<=i || j>=2*n-1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n+1; i<2*n; i++){
        for(int j=0; j<2*n; j++){
            if(j<=2*n-1-i || j>=i){
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