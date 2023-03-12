#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    char name[n+1];
    cout<<"Enter name:";
    cin>>name;

    bool check=1;

    for(int i=0; i<n; i++){
        if(name[i]!=name[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==true){
        cout<<"Word is a palindrome";
    }
    else{
        cout<<"Word is not a palindrome";
    }
    return 0;
}