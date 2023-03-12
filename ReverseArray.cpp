#include<iostream>
using namespace std;

void inputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter a number:";
        cin>>arr[i];
    }
}

void printArray(int arr[], int size){
    cout<<"The array is:";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The reverse of the given array is:";
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    inputArray(array,n);
    printArray(array,n);
    cout<<endl;
    return 0;
}