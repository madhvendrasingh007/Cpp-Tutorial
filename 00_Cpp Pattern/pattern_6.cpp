/*
    12345
    1234
    123
    12
    1
*/

#include<bits/stdc++.h>
using namespace std;

void print(int c){
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= c-i+1; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    
}

int main(){
    int c;
    cin>>c;


    print(c);
}