#include<iostream>
using namespace std;


//Function to find the first occurence of element in a sorted array
int firstOcc(int arr[], int size, int key){ 
    int start=0;                   // initialising variable start to 0, search of element will begin from index 0 

    int end=size-1;                // intialisng variable end to size-1, upto which the element has to be searched

    int mid=start+(end-start)/2;   // decalring a variable mid which will be a reference for searching

    int ans=-1;                    // initialisng a variable ans equal to -1 so that in case the element is not found, -1 will be returned

    while(start<=end){             // till the time, start is less than end, the process will repeat

        if(arr[mid]==key){         // if the mid value is equal to the key entered, then store the index of mid in ans
            ans=mid;
            end=mid-1;             // search in left part of the array for the target element
        }
        else if(key>arr[mid]){     // if the key entered is greater than the mid value of array, discard the left part of array
            start=mid+1;           // update start to search in the right part
        }
        else if(key<arr[mid]){     // if the key entered is less than the mid value of array, discard the right part of array
            end=mid-1;             // update end to search in the left part
        }
        mid=start+(end-start)/2;   // update the value of mid after each iteration
    }
    return ans;
}

//  Function to search for the last occurence of element in a sorted array
int lastOcc(int arr[], int size, int key){
    int start=0;                   // initialising variable start to 0, search of element will begin from index 0

    int end=size-1;                // intialisng variable end to size-1, upto which the element has to be searched

    int mid=start+(end-start)/2;   // decalring a variable mid which will be a reference for searching

    int ans=-1;                    // initialisng a variable ans equal to -1 so that in case the element is not found, -1 will be returned

    while(start<=end){             // till the time start is less than end, the process will repeat

        if(arr[mid]==key){         // if the mid value is equal to the key entered, then store the index of mid in ans
            ans=mid;
            start=mid+1;           // search in right part of the array for the target element
        }
        else if(key>arr[mid]){     // if the key entered is greater than the mid value of array, discard the left part of array
            start=mid+1;           // update start to search in the right part
        }
        else{                      // if the key entered is less than the mid value of array, discard the right part of array
            end=mid-1;             // update end to search in the left part
        }
        mid=start+(end-start)/2;   // update the value of mid after each iteration
    }
    return ans;
}

//Function to frame a user input array

void input(int arr[], int size){
    cout<<"Frame a sorted array:- "<<endl;
    cout<<endl;
    for(int i=0; i<size; i++){    
        cout<<"Enter a number:";
        cin>>arr[i];
    }
}

//Main Function:

int main(){
    int n, k;
    cout<<"Enter size:";
    cin>>n;
    int array[n];
    input(array, n);
    cout<<"Enter a key to be found:";
    cin>>k;
    cout<<"First occurence of "<<k<< " is at index "<<firstOcc(array, n, k)<<endl;
    cout<<"Last occurence of "<<k<< " is at index "<<lastOcc(array, n, k)<<endl;
    cout<<"Total occurence of "<<k<<" is "<<((lastOcc(array, n, k) - firstOcc(array, n , k)) + 1);
    /*int even[5]={1,2,2,2,5};
    cout<<"First occurence of 2 is at index "<<firstOcc(even, 5, 2)<<endl;
    cout<<"Last occurence of 2 is at index "<<lastOcc(even, 5, 2);*/
    return 0;
}