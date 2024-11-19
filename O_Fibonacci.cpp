#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a[n];

    long long int f = 0;
    long long int s = 1;
    
    a[0]=f;
    a[1]=s;

    for(int i = 2;i<n;i++){
        
        a[i]=f+s;
        f=s;
        s=a[i];
     
    }
    cout<<a[n-1];


    return 0;
}
