#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n, ans=0;
    cout<<"Enter size:";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter an element:";
        cin>>a[i];
    }
    const int N= 1e6+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i]=-1;
    }
    int minidx= INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]] != -1){
            minidx=min(minidx, idx[a[i]]);
            ans=a[i];
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        //if(minidx<=2){
            cout<<minidx<<endl;
        //}
       // else{
          //  cout<< minidx+1<<endl;
       // }
        cout<<ans;
    }
    
    return 0;
}