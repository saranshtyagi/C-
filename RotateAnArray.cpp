#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cout<<"Enter an element:";
        cin>>array[i];
    }
    int k;
    cout<<"Enter how many times the array has to be rotated:";
    cin>>k;

    int ansArray[n]; //creating an empty array to store the answer
    int j=0;
    //inserting n-k elements in the ansArray
    for(int i=n-k; i<n; i++){
        ansArray[j++]=array[i];
    }
    //inserting remaining k elements in the ansArray
    for(int i=0; i<=k; i++){
        ansArray[j++]=array[i];
    }
    //printing the rotated array
    for(int i=0; i<n; i++){
        cout<<ansArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}