#include <bits/stdc++.h>
using namespace std;
unsigned long long int fac(int x){
    if(x==0){
        return 1;
    }
    else{
        
        int result =  x*fac(x-1);
        return result;
    }
}

int main()
{
    int t;
    cin>>t;
    
    for(int i = 0 ;i<t;i++){
        int n;
        cin>>n;
        unsigned long long int res = fac(n);
        cout<<res<<endl;
    }
    
    
    return 0;
}
