#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};

    int k;
    cout<<"Enter how many times the array has to be rotated:";
    cin>>k;
    k=k%v.size();
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());

    for(int a:v){
        cout<<a<<" ";
    }
    return 0;
}