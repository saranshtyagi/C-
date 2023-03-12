#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter an element:";
        cin>>a[i];
    }
    int currSum=0; 
    for(int i=0; i<n; i++){
        currSum=0;
        for(int j=i; j<n; j++){
            currSum += a[j];
            cout<<currSum<<endl;
        }
    }
    return 0;
}