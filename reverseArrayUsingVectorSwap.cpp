#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v){
    int e=v.size()-1;
    int index;
    cout<<"Enter index after which array has to be reversed:";
    cin>>index;
    int s=index+1;

    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}


int main(){

    vector <int> v;
    int n;
    cout<<"Enter size:";
    cin>>n;
    for(int i=0; i<n;i++){
        int a;
        cout<<"Enter an element:";
        cin>>a;
        v.push_back(a);
    }
    vector<int>ans =reverse(v);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}