#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter a number:";
    cin>>n;
    int count=1; // initialising a variable count with value 1
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<=i){
                cout<<count<<" ";
                count++; // after each iteration the value of count will increase by 1
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}