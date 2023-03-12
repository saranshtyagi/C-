/*Using for loop:

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int count =1; // initialising a variable count =1 which will update itself after each iteration.
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<=i){
                cout<<count<<" ";
                count++; //updating the value of count, count++ is same as count =count+1.
            }
            else{
                    cout<<" ";
            } 
        }
        cout<<endl;
    }
    return 0;
}*/

//using while loop:

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int count =1;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            if(j<=i){
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}