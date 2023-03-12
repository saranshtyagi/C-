#include<iostream>
using namespace std;

int f(int *arr, int idx, int n){
    if(idx==n-1){
        return arr[idx];
    }
    return max(arr[idx], f(arr, idx+1, n));
}

int main(){
    int n=6;
    int arr[6]={1,2,3,4,9,8};
    cout<<f(arr, 0, n);
    return 0;
}