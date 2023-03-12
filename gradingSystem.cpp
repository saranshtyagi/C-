/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your marks:";
    cin>>n;
    if(n<25){
        cout<<"Your grade is F";
    }
    else if(n>=25 && n<45){
        cout<<"Your grade is E";
    }
    else if(n>=45 && n<50){
        cout<<"Your grade is D";
        }
    else if(n>=50 && n<60){
        cout<<"Your grade is C";
    }
    else if(n>=60 && n<80){
        cout<<"Your grade is B";
    }
    else{
        cout<<"Your grade is A";
    }
    
    return 0;
}