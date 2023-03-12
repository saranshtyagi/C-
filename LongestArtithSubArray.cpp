#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter an element:";
        cin>>a[i];
    }
    int ans=2;
    int len=2;
    int cd=(a[1]-a[0]);
    int pd=(a[1]-a[0]);

    for(int i=2; i<n; i++){
        cd=a[i]-a[i-1];
        if(cd==pd){
            len++;
        }
        else{
            pd=cd;
            ans=max(ans, len);
            len=2;
        }
        ans=max(ans, len);
    }
    cout<<"Maximum length arithmetic subarray is:"<<ans;
    return 0;
}
