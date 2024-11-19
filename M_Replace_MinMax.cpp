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
    int m_in ,max_in;
    int min=INT_MAX,max=INT_MIN;
   
    for(int i = 0 ;i<n;i++){

        if(a[i]<=min){
            min = a[i];
            m_in=i;
            
        }
        if(a[i]>=max){
            max = a[i];
            max_in=i;
        }
      
    }
    int temp = a[m_in];
    a[m_in]= a[max_in];
    a[max_in]=temp;
    
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }

    
    
    return 0;
}
