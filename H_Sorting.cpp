#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
    cin>>n;
    int a[n];
    int i = 0;

    for(i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
