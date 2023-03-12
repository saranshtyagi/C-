//........0,1,2,3,4,5,6
//arrr[]={1,2,3,4,5,6,7}
//alternate arr[]={2,1,4,3,6,5,7}

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

void alternate(int arr[], int size){
    int i=0; 
    int j=1;
    for(int k=0; k<size; k++){
        swap(arr[i], arr[j]);
        i=i+2;
        j=j+2;
        if(j>size-1){
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    inputArray(array, n);
    alternate(array, n);
    printArray(array, n);
    

    return 0;
}