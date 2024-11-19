#include <bits/stdc++.h>
using namespace std;
int fac(int x){
    if(x==0){
        return 1;
    }
    
        
        int result =  x*fac(x-1);
        return result;
    
}

int main()
{
    int x;
    cin>>x;
    int res=fac(x);
    cout<<res;
    
    return 0;
}
