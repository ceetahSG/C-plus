#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i = 0 ;i< x; i++){
        string s,t;
        cin>>s>>t;
        int k  = 0;
        int sizeT  = t.size();
        int sizeS = s.size();


        for(int j = 0;j<sizeS;j++){
            cout<<s[j];
            while(k!= sizeT){
                cout<<t[k];
                k++;
                break;
            }   
        }
        
        while(k!= sizeT){
                cout<<t[k];
                k++;
        }
        cout<<endl;

    }

    return 0;
}
