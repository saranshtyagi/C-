#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int> &v){
   for(int i=1; i<v.size(); i++){
       v[i]+=v[i-1];
   }
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int element;
        cout<<"Enter element:";
        cin>>element;
        v.push_back(element);
    }
    prefixSum(v);
    for(int elements:v){
        cout<<elements<<" ";
    }
    return 0;
}