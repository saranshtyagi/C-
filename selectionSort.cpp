#include<iostream>
using namespace std;

int inputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter an element:";
        cin>>arr[i];
    }
}

int selectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int minIndex=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int printArray(int arr[], int size){
    cout<<"The sorted array is:";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int array[n];
    inputArray(array,n);
    selectionSort(array,n);
    printArray(array,n);
    return 0;
}