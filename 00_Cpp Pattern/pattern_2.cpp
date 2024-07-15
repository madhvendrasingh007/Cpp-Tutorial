/*
    *
    **
    ***
    ****
 */


#include<bits/stdc++.h>
using namespace std;

void print(int c){
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout<<endl;
        
    }
}


int main(){

    int c;
    cin>>c;

    print(c);    
}