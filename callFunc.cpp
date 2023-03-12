#include<iostream>
using namespace std;

int power(int a, int b){
    int ans=1;
    for(int i=1; i<=b; i++){
        ans=ans*a;
        
    }
    cout<<"The required answer is:"<<ans<<endl;
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter power:";
    cin>>b;
    power(a,b);
    return 0;
} 