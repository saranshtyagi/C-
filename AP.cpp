#include<iostream>
using namespace std;

int nTerm(int n){
    int term=3*n+7;
    cout<<"The nth term is:"<<term<<endl;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    nTerm(n);

    return 0;
}