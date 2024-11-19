#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x;
    cin>>x;

    string  key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
     
    
    string s;
    cin>>s;
    string result;
    if(x==1){
        int size = original.size();
        for(int i = 0;i<s.size();i++){
        for(int j = 0;j<size;j++){
            if(s[i]==original[j]){
                result.push_back(key[j]);
                break;
            }
        }    
    }

 }
 else{
    int size = original.size();
        for(int i = 0;i<s.size();i++){
        for(int j = 0;j<size;j++){
            if(s[i]==key[j]){
                result.push_back(original[j]);
                break;
            }
        }    
    }
 }
 cout<<result;
   
    return 0;
}
