/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i=2;
    int sum=0;
    for(i=2; i<=n; i++){
        if(i%2!=0){
            continue;
        }
        else{
            sum=sum+i;
        }
    }
    cout<<"Sum of all even numbers upto your entered number is:"<<sum<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i;j++){
            /*if(j<=i){
                cout<<"*";
            }*/
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}