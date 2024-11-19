#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;

    
    int j = x.size();
    int size = x.size();
    int count  = 0;
    
    for(int i = 0 ; i<j;i++){
        j--;
        if(x[i]==x[j]){
            count++;
        }
        else{
            break;
        }
       
    }
   
    if(count == size/2 || count == (size+1)/2){

        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
    
    return 0;
}
