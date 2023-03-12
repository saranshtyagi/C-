#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 4> a= {1,2,3,4};
    int size=a.size();
    //Print the array:
    cout<<"The array is: ";
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //Element at any index:
    cout<<"Element at index 2 is:"<<a.at(2)<<endl;
    //Whether array empty or not:
    cout<<"Empty or not:"<<a.empty()<<endl;
    //Print first element of array:
    cout<<"First element:"<<a.front()<<endl;
    //Print last element of array:
    cout<<"Last element:"<<a.back()<<endl;
    return 0;
}