#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int ind=0;
    int min = a[ind];
    

    for(int i =0 ;i<n-1;i++){
        if(a[i+1]<min){
            min = a[i+1];
            ind =i+1;
            
        }
    }

    cout<<min<<" "<<ind+1;

    return 0;
}
