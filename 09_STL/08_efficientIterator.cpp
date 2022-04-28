#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,4,5,6};

    //index method to declare vector
    for (int i = 0; i < v.size(); ++i)
        cout<<v[i]<<" ";
    cout<<endl;

    //iterator method to declare vector
    vector<int> :: iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout<<(*it)<<" ";
    cout<<endl;
    
    //range based loop in vector
    for(int value : v){
        cout<<value<<" ";
    }
    cout<<endl;

    //*******range based loop in pair*******
    vector<pair<int,int>> v_p = {{1,2}, {2,3}, {3,4}};
    for(pair<int,int> val : v_p)
        cout<<val.first<<" "<<val.second<<endl;


    //*******auto keyword loop in pair*******
    auto a1 = 2.52;
    cout<<a1<<endl;
    // vector<int> :: iterator it;
    // for (it = v.begin(); it != v.end(); ++it)
    //     cout<<(*it)<<" ";
    // above code can be written as (eg : int a=3 can be written as auto a=3)
    for(auto it = v.begin(); it != v.end(); ++it)
        cout<<(*it)<<" ";
    cout<<endl;

    // and next code can be written as
    for(auto val : v_p)
        cout<<val.first<<" "<<val.second<<endl;
    return 0;
}
