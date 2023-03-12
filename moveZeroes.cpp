#include<iostream>
using namespace std;

int input(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<"Enter an element:";
        cin>>arr[i];
    }
}

void moveZeroes(int arr[], int n){
    int i=0; //i is a non zero number
    for(int j=0; j<n; j++){
        if(arr[j]!=0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int print(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    input(array,n);
    moveZeroes(array,n);
    print(array,n);
    return 0;
}