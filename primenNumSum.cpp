#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        int j;
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            sum=sum+j;
        }
    }
    cout<<"Sum:"<<sum<<endl;
    return 0;
}