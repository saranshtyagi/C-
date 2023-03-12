/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not*/

#include<iostream>
using namespace std;

int main(){
    float classes, attended;
    cout<<"Enter total number of classes held:";
    cin>>classes;
    cout<<"Enter number of classes attended:";
    cin>>attended;
    float percent=(attended/classes)*100;
    if(percent>=75){
        cout<<"You are allowed to sit in exams!";
    }
    else{
        cout<<"You are not allowed to sit in exams :(";
    }
    return 0;
}