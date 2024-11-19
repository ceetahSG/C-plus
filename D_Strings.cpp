#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;

    cout<<x.size()<<" "<<y.size()<<endl;
    cout<<x+y<<endl;
    char temp;
    temp = x[0];
    x[0]=y[0];
    y[0] = temp;
    
    cout<<x<<" "<<y;
    return 0;
}
