#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter rows:";
    cin>>n;
    cout<<"Enter columns:";
    cin>>m;
    int array[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Enter an element:";
            cin>>array[i][j];
        }
    }
    int mx=array[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            mx=max(mx, array[i][j]);
        }
    }
    cout<<"The maximum element in the matrix is:"<<mx;
    return 0;
}