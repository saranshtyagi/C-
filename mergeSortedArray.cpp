#include<iostream>
using namespace std;

int input(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<"Enter an element:";
        cin>>arr[i];
    }
}

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i]; // these three lines can also be written as arr3[k++]=arr1[i++]
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

int print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n, m;
    cout<<"Enter size of first array:";
    cin>>n;
    int array1[n];
    input(array1, n);
    cout<<"Enter size of another array:";
    cin>>m;
    int array2[m];
    int array3[n+m];
    input(array2,m);
    merge(array1, n, array2, m, array3);
    cout<<"The merge sorted array is: "<<print(array3, n+m);
    return 0;
}