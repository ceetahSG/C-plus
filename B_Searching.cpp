#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int x,ind,count=0;
    cin>>x;

   for(int i = 0 ;i<n;i++){
    if(a[i]==x){
        ind = i;
        count++;
        break;
   
    }
    
   }
   if(count==0){
    cout<<"-1";
   }
   else{
   cout<<ind;
   }
   
    
}
