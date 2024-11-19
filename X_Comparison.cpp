#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int size = s.size();

    for(int i = 1 ; i <s.size();i++){
        int min = i;
        for(int j = i+1;j<s.size();j++){
            if(s[min]>s[j]){
                char temp = s[j];
                s[j] = s[min];
                s[min] = temp;
            }
           
        }
       
    }
    cout<<s;

    return 0;
}
