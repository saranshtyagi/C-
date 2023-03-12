#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    
    cout<<"The required array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void inputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter a number:";
        cin>>arr[i];
    }
}

void inputArray1(char arr1[], int size1){
    for(int i=0; i<size1; i++){
        cout<<"Enter a character:";
        cin>>arr1[i];
    }
}

void printArray1(char arr1[],int size1){
    
    cout<<"The required array is: ";
    for(int i=0; i<size1; i++){
        cout<<arr1[i]<<" ";
    }
}


int main(){
    int n; 
    cout<<"Enter size:";
    cin>>n;
    int array[n];

    inputArray(array,n);
    printArray(array, n);
    cout<<endl;

    int a;
    cout<<"Enter size:";
    cin>>a;
    char array1[a];
    inputArray1(array1, a);
    printArray1(array1, a);
    return 0;
}