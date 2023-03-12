#include<iostream>
using namespace std;

int main(){
    int r1, c1;
    cout<<"Enter number of rows for matrix 1:";
    cin>>r1;
    cout<<"Enter number of columns for matrix 1:";
    cin>>c1;
    int A[r1][c1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<"Enter elements:";
            cin>>A[i][j];
        }
    }

    int r2, c2;
    cout<<"Enter number of rows for matrix 2:";
    cin>>r2;
    cout<<"Enter number of columns for matrix 2:";
    cin>>c2;
    int B[r2][c2];
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<"Enter elements:";
            cin>>B[i][j];
        }
    }

    if(c1!=r2){
        cout<<"Matrix multiplication not possible for this input";
    }

    int C[r1][c2];
    
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            int value=0;
            for(int k=0; k<r2; k++){
                value+=A[i][k]*B[k][j];
            }
            C[i][j]=value;
        }
    }
    
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}