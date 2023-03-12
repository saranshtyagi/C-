//To print:
//1
//22
//333
//4444
//55555
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<=i){
                cout<<i+1<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}