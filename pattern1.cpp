//Code to print pattern like this:
//*
//**
//***
//****
//***** and so on by taking input from user as to how many rows he/she wants

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1; i<=n; i++){ //This will print rows from 1 to n
        for(int j=1; j<=i; j++){ //This will print star from j=1(i.e 1 star) to j=i(i.e number of stars equal to the row number for eg 2nd row= 2 stars and so on.)
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}