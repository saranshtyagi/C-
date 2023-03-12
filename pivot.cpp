#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

void input(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter a number:";
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    input(array, n);
    cout<<"The index of pivot element is:"<<pivot(array,n);
    return 0;
}