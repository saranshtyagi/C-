#include<iostream>
using namespace std;

/*void myFunction(){
    int a,b,c,d;
    if((a>b && b>c && c>d) || (a>b && b>d && d>c) || (a>c && c>b && b>d) || (a>c && c>d && d>b)|| (a>d && d>b && b>c) || (a>d && d>c && c>b)){
        cout<<a;
    }
    else if((b>a && a>c && c>d) || (b>a && a>d && d>c) || (b>c && c>a && a>d) || (b>c && c>d && d>a) || (b>d && d>c && c>a) || (b>d && d>a && a>c)){
        cout<<b;        
    }
    else if((c>a && a>b && b>d) || (c>a && a>d && d>b) || (c>b && b>a && a>d) || (c>b && b>d && d>a) || (c>d && d>a && a>b) || (c>d && d>b && b>a)){
        cout<<c;
    }
    else if((d>a && a>c && c>b) || (d>a&& a>b && b>c) || (d>b && b>c &&c>a) || (d>b && b>a && a>c) || (d>c && c>a && a>b) || (d>c && c>b && b>a)){
        cout<<d;
    }
}*/

int main(){
    int a,b,c,d;
    
    cout<<"enter:";
    cin>>a;
    cout<<"enter:";
    cin>>b;
    cout<<"enter:";
    cin>>c;
    cout<<"enter:";
    cin>>d;
    //myFunction();
    

    if((a>=b && b>=c && c>=d) || (a>=b && b>=d && d>=c) || (a>=c && c>=b && b>=d) || (a>=c && c>=d && d>=b)|| (a>=d && d>=b && b>=c) || (a>=d && d>=c && c>=b)){
        cout<<a;
    }
    else if((b>=a && a>=c && c>=d) || (b>=a && a>=d && d>=c) || (b>=c && c>=a && a>=d) || (b>=c && c>=d && d>=a) || (b>=d && d>=c && c>=a) || (b>=d && d>=a && a>=c)){
        cout<<b;        
    }
    else if((c>=a && a>=b && b>=d) || (c>=a && a>=d && d>=b) || (c>=b && b>=a && a>=d) || (c>=b && b>=d && d>=a) || (c>=d && d>=a && a>=b) || (c>=d && d>=b && b>=a)){
        cout<<c;
    }
    else if((d>=a && a>=c && c>=b) || (d>=a && a>=b && b>=c) || (d>=b && b>=c &&c>=a) || (d>=b && b>=a && a>=c) || (d>=c && c>=a && a>=b) || (d>=c && c>=b && b>=a)){
        cout<<d;
    }
    return 0;
}