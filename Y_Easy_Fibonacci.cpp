#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int f=0;
    int s=1;
    int t;
    
    for(int i = 0;i<x;i++){
        if(i==0){
            cout<<f<<" ";
        }
        else if(i==1){
            cout<<s<<" ";
        }
        else{
            t=f+s;
            cout<<t<<" ";
            f=s;
            s=t;
        }
        
    }
    return 0;
}
