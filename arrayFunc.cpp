#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    cout<<"The required array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[6]={0,1,2,3,4,5};
    printarray(array, 5);
}