#include<iostream>
using namespace std;

void f(int *arr, int idx, int n){
    if(idx==n){
        return;
    }
    cout<<arr[idx]<<" ";
    f(arr, idx+1, n);
}

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    f(arr, 0, n);
    return 0;
}