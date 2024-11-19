#include <bits/stdc++.h>
using namespace std;
void rec(int x){
    if(x==0){
        return;
    }
    rec(x/10);
    cout<<x%10<<" ";
     
}

int main()
{
    int n;
    int x;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>x;
        rec(x);
        cout<<endl;
        

    }
    return 0;
}
