#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter number of rows:";
    cin>>row;
    cout<<"Enter number of columns:";
    cin>>col;
    int array[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter an element:";
            cin>>array[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}