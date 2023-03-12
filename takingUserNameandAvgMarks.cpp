#include<iostream>
using namespace std;

int main(){
    char str[40];
    int m1, m2, m3, avg;

    cout<<"Enter your name:";
    cin>>str;

    cout<<"Enter your marks in three subjects:";
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3;

    cout<<"Your name is:"<<str<<endl;
    cout<<"Your average marks in three subjects is:"<<avg<<endl;
    return 0;
}