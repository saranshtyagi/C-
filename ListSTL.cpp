#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;
    l.push_back(9);
    l.push_back(8);
    l.push_back(4);
    l.push_back(3);
    l.push_front(5);
    for(int i:l){
        cout<<i<<" "; //5 9 8 4 3 
    }
    cout<<endl;
    l.pop_back(); //To delete the last element
    for(int i:l){
        cout<<i<<" "; //5 9 8 4 
    }cout<<endl;
    l.pop_front();
    for(int i:l){
        cout<<i<<" "; //9 8 4 
    }cout<<endl;
    cout<<"Size:"<<l.size()<<endl;
    return 0;
}