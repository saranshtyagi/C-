#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    vector<int>a(5,1); //Creates vector of size 5 and initialises all five elements as 1
    cout<<"The vector formed with initialisation is: ";
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    //To copy the "a" vector formed:
    vector<int>last(a);
    cout<<"The vector a formed using last is: ";
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //Print the vector:
    cout<<"The vector formed using pushback is: ";
    for(int i:v){
        cout<< i <<" ";
    }
    //To check the capacity of vector:
    cout<<"\nCapacity:"<<v.capacity()<<endl;
    //To check the size of vector:
    cout<<"Size:"<<v.size()<<endl;
    //To print element at an index:
    cout<<"Element at index 2 is: "<<v.at(2)<<endl;
    //To print the first element:
    cout<<"First: "<<v.front()<<endl;
    //To print the last element:
    cout<<"Last: "<<v.back()<<endl;
    //To pop an element from last:
    v.pop_back();
    //Print the array after popping:
    cout<<"The array after popping: ";
    for(int i:v){
        cout<<i<<" ";
    }
    //To clear the vector:
    v.clear();
    cout<<"\nThe size after clear is: "<<v.size()<<endl; //Size becomes zero
    cout<<"The capacity after clear is: "<<v.capacity()<<endl; //Capacity remains same as it contains the memeory locations assigned
    return 0;
}

/*int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int a;
        cout<<"Enter an element:";
        cin>>a;
        v.push_back(a);
    }
    cout<<"The array is: ";
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}*/

//Practice


