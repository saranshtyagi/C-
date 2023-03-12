#include<iostream>
using namespace std;

int binary(int arr[], int size, int key){
    int start=0; 
    int end= size-1;
    int mid= start + (end-start)/2;  //Usually taking mid=(start+end)/2 works but sometime the value of start+end exceeds the integer range
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;  //pointer ko mid k right m leke jane k liye
        }
        else{
            end=mid-1;   // pointer ko mid k left m leke aane k liye
        }
        mid = start+ (end-start)/2;
    }
    return -1;
}

void inputArray(int arr[], int size){ 
    for(int i=0; i<size; i++){
        cout<<"Enter a number:";
        cin>>arr[i];
    }
}

int main(){
    int n,k;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    inputArray(array, n);
    cout<<"Enter key to be found:";
    cin>>k;
    cout<<"The index of "<<k<<" is: "<<binary(array, n, k); ;
    //binary(array, n, k); 
    return 0;
}