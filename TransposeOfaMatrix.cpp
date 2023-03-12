#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter number of rows:";
    cin>>n;
    cout<<"Enter number of columns:";
    cin>>m;
    int array[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Enter element:";
            cin>>array[i][j];
        }
    }

    cout<<endl;



    cout<<"The matrix is:"<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    } 
    
    cout<<endl;

    int transpose[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            transpose[i][j]=array[j][i];
        }
    }

    cout<<"The transpose matrix is:"<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}