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

int getMax(int arr[], int size){
    int max=INT32_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size){
    int min=INT32_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    inputArray(array, n);
    printArray(array, n);
    cout<<endl;
    cout<<"The max value in array is:"<<getMax(array, n)<<endl;
    cout<<"The min value in array is:"<<getMin(array, n)<<endl;
    return 0;
}