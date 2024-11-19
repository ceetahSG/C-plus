#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    
    for(int i  = 0 ;i<x.size();i++){
        int a = x[i];
        if(a>=97 && a<=122){
            char a = toupper(x[i]);
            cout<<a;
        }
        else if(a>=65 && a<=90){
            char a = tolower(x[i]);
            cout<<a;
        }
        else{
            cout<<" ";
        }
        
    }

    return 0;
}
