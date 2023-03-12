#include<iostream>
using namespace std;

int Unique(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    cout<<"\nThe unique element is: "<<ans;
}

void inputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter a number:";
        cin>>arr[i];
    }
}

void printArray(int arr[], int size){
    cout<<"The array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    inputArray(array, n);
    printArray(array, n);
    Unique(array, n);
}