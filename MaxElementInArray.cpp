#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter an element:";
        cin>>arr[i];
    }
    int mx=arr[0];
    for(int i=0; i<n; i++){
        mx=max(mx, arr[i]);
    }
    cout<<"Max element is:"<<mx;
    return 0;
}