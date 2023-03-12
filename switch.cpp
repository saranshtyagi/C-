#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Enter a character:";
    cin>>button;

    switch(button){
        case 'a':
            cout<<"Namaste"<<endl;
            break;
        case 'b':
            cout<<"Hola"<<endl;
            break;
        case 'c':
            cout<<"Ciao"<<endl;
            break; 
        case 'd':
            cout<<"Salut"<<endl;
            break;

        default:
            cout<<"I am still learning more!";
            break;   
    }
    return 0;
}