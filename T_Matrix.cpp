#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin>>r;
    int a[r][r];
    
    for(int i = 0;i<r;i++){
        for(int j = 0;j<r;j++){
            cin>>a[i][j];
        }
    }
    int sum1=0,sum2=0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<r;j++){
            if(i==j){
                sum1=sum1+a[i][j];
            }
           if(i+j==r-1){
            sum2=sum2+a[i][j];
           }
        }
    }

    int sum= sum1-sum2;
    if(sum<0){
        sum = sum*-1;
    }
    cout<<sum;
    


    return 0;
}
