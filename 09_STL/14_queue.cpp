#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    q.push("hello");
    q.push("md");
    q.push("madhav");
    q.push("hi");

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();    //remove element from queue
    }
    return 0;
}
