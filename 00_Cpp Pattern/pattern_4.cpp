/*
    1
    22
    333
    4444
*/

#include<bits/stdc++.h>
using namespace std;

void print(int c){
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
        
    }
    
}

int main(){
    int c;
    cin>>c;

    print(c);
}