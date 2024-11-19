#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
     int a[n];
     int sum = 0;
     string x;
    
    cin>>x;
    
    for(int i =0; i<n;i++){
        sum = sum+x[i]-'0';
    }  
    
    cout<<sum;
    return 0;
}
