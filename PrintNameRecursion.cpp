#include<iostream>
using namespace std;

void name(int i,int n){
    //base case
    if(i>n){  // if i exceeds n then stop
        return;
    }
    //function call
    cout<<"Saransh"<<endl;
    name(i+1, n); // updates i by 1 till base condition is satisfied
}

int main(){
   int n;
   cout<<"Enter number:";
   cin>>n; // takes input from user about how many times name has to be printed
   name(1, n); //calls recursive function name with initialisation 1 and condition till the user entered number
   return 0;
}