#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    return 2 * power(n-1);
}

int main(){
    int n;
    cout<<"Enter power:";
    cin>>n;
    cout<<"2 raised to "<<n<<" is: "<<power(n);
    return 0;
}