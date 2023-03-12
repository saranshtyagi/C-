#include<iostream>
using namespace std;

void inputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter a number:";
        cin>>arr[i];
    }
}

void printArray(int arr[], int size){
    cout<<"The required array is:";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int sum(int arr[], int size){
    int add=0; 
    for(int i=0; i<size; i++){
        add=add+arr[i];
    }
    return add;
}


int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    inputArray(array, n);
    printArray(array, n);
    cout<<endl;
    cout<<"The sum of elements in array is:"<<sum(array, n);
    
    return 0;
}