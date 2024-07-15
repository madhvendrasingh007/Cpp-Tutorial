/*
    1
    12
    123
    1234
*/

#include<bits/stdc++.h>
using namespace std;

void print(int c){
    for (int i = 0; i < c; i++)
    {
        for (int j = 1; j <= i; j++)
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