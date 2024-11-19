#include <bits/stdc++.h>
using namespace std;
bool isValid(const string& word) {
    for (char ch : word) {
        if (isalpha(ch)) {
            return true;  
        }
    }
    return false;
}
int main()
{
    string line;
    getline(cin,line);
    stringstream ss(line);
    string word;
    int wordcount = 0;

    while(ss>>word){
         if(isValid(word)){
            wordcount++;
         }
    }
    cout<<wordcount;
    return 0;
}
