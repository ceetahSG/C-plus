#include <bits/stdc++.h>
using namespace std;

int main()
{
    int guess,count=0;
    while(1){
        cout<<"Guess a number between 1 - 5:"<<endl;
        cin>>guess;

        int random = rand()%6;

        if(guess == random ){
            cout<<"Congrats you win"<<endl;
            count++;
            cout<<"Your score is "<<count<<endl;
        }
        else{
            cout<<"You loose the number was "<<random<<endl;
        }
    }
    return 0;
}
