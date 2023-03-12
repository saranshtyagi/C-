/*Code to print a rectangle pattern if 5 rows and 4 columns are given:

#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=4; j++){ //this will print a pattern like ****
            cout<<"*";
        }
        cout<<endl;// this will add a line break to make a code go from **** to another line
    }
    return 0;
}*/

//Code to take input from user regarding rows and columns:
#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter number of rows:";
    cin>>row;
    cout<<"Enter number of columns:";
    cin>>col;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}