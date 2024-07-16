/*
    *******
     *****
      ***
       *
*/

#include<bits/stdc++.h>
using namespace std;

void print(int c){
    for (int i = 0; i < c; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        
        // star
        for (int j = 0; j < 2*c - (2*i+1); j++)
        {
            cout<<"*";
        }
        

        // space
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
}

int main(){
    int c;
    cin>>c;

    print(c);
}