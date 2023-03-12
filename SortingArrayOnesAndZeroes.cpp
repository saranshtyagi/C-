#include<iostream>
#include<vector>
using namespace std;

void sortZeroesOnes(vector<int> &v){
    int zeroCount=0;
    for(int ele:v){
        if(ele==0){
            zeroCount++;
        }
    }
    for(int i=0; i<v.size(); i++){
        if(i<zeroCount){
            v[i]=0;
        }
        else{
            v[i]=1;
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
    sortZeroesOnes(v);
    for(int elements:v){
        cout<<elements<<" ";
    }
    return 0;
}
//Using two pointers:
#include<iostream>
#include<vector>
using namespace std;

void sortZeroesOnes(vector<int> &v){
    int left_ptr=0; 
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
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
    sortZeroesOnes(v);
    for(int elements:v){
        cout<<elements<<" ";
    }
    return 0;
}