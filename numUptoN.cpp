/*using for loop
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The numbers upto your entered number are:"<<endl;
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
    return 0;
}*/

/*using while loop
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i=1;
    cout<<"The numbers upto your entered number are:"<<endl;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
    return 0;
}*/

//using do while loop:
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i=1;
    cout<<"The numbers upto your entered number are:"<<endl;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=n);
    return 0;
}