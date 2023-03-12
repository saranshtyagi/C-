#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m){
    int studentCount=1; //checking for first student 
    int pageSum=0; //initialising pageSum which contains the sum of pages
    int mid;
    for(int i=0; i<n; i++){
        if(pageSum+arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++; //check for another student

            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
}

int allocateBooks(int arr[], int n, int m){
    int s=0; 
    int sum=0; //contains sum of pages
    for(int i=0; i<n; i++){  // run loop to add pages and store in sum
        sum +=arr[i];
    }
    int e=sum;
    int ans=-1; //return -1 if not possible to assign n books to m students
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr, n, m)){
            ans=mid;
            e=mid-1; //narrows space search to [start, mid-1] to get a value less than mid since we need the minimum value of maximum number of pages
        }
        else{
            s=mid+1; //because if it is not possible to allocate the books with maximum pages equal to mid then it won't be possible for any value less than mid
        }
        mid=s+(e-s)/2;
    }
    
    return ans;
}

int inputArray(int arr[], int m){
    for(int i=0; i<m; i++){
        cout<<"Enter number of pages:";
        cin>>arr[i];
    }
} 

int main(){
    int n, m;
    cout<<"Enter number of books:";
    cin>>m;
    int array[m];
    inputArray(array, m);
    cout<<"Enter number of students:";
    cin>>n;
    isPossible(array, n, m);
    cout<<"The answer is:"<<allocateBooks(array, n, m);
    return 0;
}