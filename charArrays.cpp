#include<iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!=0; i++){
        count++;
    }
    return count;
}

int main(){
    /*int n;
    cout<<"Enter size:";
    cin>>n;
    char ch[n];
    for(int i=0; i<n; i++){
        cout<<"Enter a character:";
        cin>>ch[i];
    }
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }*/
    char name[20];
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    cout<<"The length of your name is:"<<getLength(name);
    return 0;
}