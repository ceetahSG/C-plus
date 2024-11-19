#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int x,max=0;
     
    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>x;
        
        if(x>max){
            max=x;
        }

    }
    
    cout<<max;

    return 0;
}
