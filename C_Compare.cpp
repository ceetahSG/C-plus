#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    int minLen = min(x.size(),y.size());
    
        for(int i = 0;i<minLen;i++){
        if(x[i]==y[i]){
            continue;
        }
        else if(x[i]<y[i]){
            cout<<x;
            return 0;
        }
        else{
            cout<<y;
            return 0;
        }
    }

    if(x.size()<y.size()){
        cout<<x;
    }
    else{
        cout<<y;
    }

    

  
            
            
    return 0;
}
