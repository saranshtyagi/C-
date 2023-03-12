#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==0 || j==4 || i==0 || i==4){
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