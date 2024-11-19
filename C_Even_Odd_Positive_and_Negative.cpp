#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int even=0,odd=0,positive=0,negative=0;
    int x;

    for(int i = 0;i<n;i++){
        cin>>x;
        if(x%2==0){
            even++;
            if(x>0){
            positive++;
        }
        else if(x<0){
            negative++;
        }
        }
        else if(x%2!=0){
            odd++;
            if(x>0){
            positive++;
        }
        else if(x<0){
            negative++;
        }
        }
        

    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
    return 0;
}
