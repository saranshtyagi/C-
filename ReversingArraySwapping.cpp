#include<iostream>
using namespace std;

void inputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter a number:";
        cin>>arr[i];
    }
}

void printArray(int arr[], int size){
    cout<<"The reversed array is:";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
 void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
 }

 int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    inputArray(array,n);
    reverse(array,n);
    printArray(array,n);
    cout<<endl;
    
    return 0;
 }