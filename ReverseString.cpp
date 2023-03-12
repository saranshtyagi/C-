#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int start=0, end=n-1;

    while(start<end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    char name[n+1];
    cout<<"Enter a string:";
    cin>>name;
    reverse(name, n);
    cout<<"The reversed name is: "<<name;
    return 0;
}