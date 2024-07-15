/*
    *****   
    ****    
    ***
    **
    *
*/

#include<bits/stdc++.h>
using namespace std;

void print(int c){
    for (int i = c; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

// OR

void print1(int c){
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c-i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

int main(){
    int c;
    cin>>c;

    print(c);
    print1(c);
}