// To print 1,2,3,4,.... using recursion but not by i+1 approach


#include<iostream>
using namespace std;

void backTrack(int i, int n){
    //Suppose n=4 is entered
    if(i<1){    //base case, 4<1 is false so execution of this block doesnt't take place
        return;
    }
    backTrack(i-1, n);  //(4-1=3, 4), again function will be called and the same will be executed till base case is true
    cout<<i<<" "; // once base case is true then back tracking will happen i.e. all values of i will be printed in reverse order for eg, in first iteration i=4, then 3,2,1 so execution will be 1,2,3,4s
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    backTrack(n,n);
    return 0;
}