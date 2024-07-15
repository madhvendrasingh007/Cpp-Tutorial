/*
        *
       ***
      *****
     *******

*/

#include<bits/stdc++.h>
using namespace std;

void print(int c){
    for (int i = 0; i < c; i++)
    {
        // Space 
        for (int j = 0; j < c-i+1; j++)
        {
            cout<<" ";
        }
        

        // Star 
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }
        

        // Space
        for (int j = 0; j < c-i+1; j++)
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