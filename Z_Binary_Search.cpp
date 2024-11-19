#include <bits/stdc++.h>
using namespace std;

void bsearch( vector<int> &a,int x){
    bool found = false;
    int left = 0,right = a.size()-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(x==a[mid]){
            found = true;
            break;
        }
        else if(x<a[mid]){
            left = mid+1;
        }
        else {
            right = mid-1;
        }
        
        
    }
    if(found){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
   

}

int main()
{
    int n,q;
    cin>>n;
    cin>>q;



    vector<int> a;
    

    for(int i = 0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    
    sort(a.begin(),a.end(),greater <int>());
     
     for(int i = 0;i<q;i++){
        int x;
        cin>>x;
        bsearch(a,x);
     }
   
    return 0;
}
