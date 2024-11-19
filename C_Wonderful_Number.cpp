#include <bits/stdc++.h>
using namespace std;
void check(int a){
    int x = a;
    if(a%2!=0){
        int binary;
        int c = a;
        string Binary;
        while(c!=0){
            int remain = c%2;
            Binary.push_back(remain);
            
        }
        cout<<Binary;
    }
    else{
        cout<<"NO";
    }
}

int main()
{
    int x;
    cin>>x;
    check(x);
    return 0;
}
