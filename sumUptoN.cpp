/*using for loop:
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<"The sum upto your entered number is:"<<sum;
    return 0;
}*/

/*using while loop:
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"The sum upto your entered number is:"<<sum;
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
    int sum=0;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<"The sum upto your entered number is:"<<sum;
    return 0;
}