#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    bool flag = false;
    
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    int count=0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(a[i][j]==x){
                flag = true;

            }
        }
        

    }

    if(flag){
        cout<<"will not take number";
    }
    else{
        cout<<"will take number";

    }
    return 0;
}
