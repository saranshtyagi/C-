/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount*/

#include<iostream>
using namespace std;

int main(){
    int salary,year;
    cout<<"Enter salary:";
    cin>>salary;
    cout<<"Enter your year of service:";
    cin>>year;
    if(year>5){
        int bonus=0.05*salary;
        int new_salary=salary+bonus;
        cout<<"Congratulations your net salary is:"<<new_salary;
    }
    else{
        cout<<"Continue the great work!";
    }
    return 0;
}