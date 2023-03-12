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

void search(int arr[], int size){
    int count=0;
    int a;
    cout<<"Enter number to be found:";
    cin>>a;
    for(int i=0; i<size; i++){
        if(arr[i]==a){
            cout<<"Present";
            count++;
            break;
        }
    }
    
    if(count==0){
        cout<<"Not present";
    }
}
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    inputArray(array, n);
    printArray(array,n);
    cout<<endl;
    search(array,n);
    return 0;
}