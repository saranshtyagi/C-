#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int> &v){
    int left_ptr=0; 
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(((v[left_ptr]%2)!=0) && ((v[right_ptr])%2==0)){
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if((v[left_ptr]%2)==0){
            left_ptr++;
        }
        if((v[right_ptr]%2)!=0){
            right_ptr--;
        }
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
    sortArray(v);
    for(int elements:v){
        cout<<elements<<" ";
    }
    return 0;
}