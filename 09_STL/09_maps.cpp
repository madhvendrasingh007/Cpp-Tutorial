/*  MAPS are implemented using RED BLACK TREES
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.
*/

#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr : m)
        cout<<pr.first<<" "<<pr.second<<endl;
}

int main(){
    //MAP initialization
    map<int,string> m;

    //MAP declaration method-1
    m[1]="abc";     // O(log(n))
    m[5]="mad";
    m[3]="tank";
    // MAP declaration method-2
    m.insert({4,"help"});
    m.insert({9,"run"});

    //MAP declaration
    map<int,string> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it)

        // cout<<(*it).first<<" "<<(*it).second<<endl;
        // or
        cout<<(it->first)<<" "<<(it->second)<<endl;
        

    auto f1 = m.find(3);        // return iterator of index 3
    //if iterator is not present at that index it will print the end iterator i.e, n+1 index
    // or map<int,string> :: iterator f1 = m.find(3);

    if(f1 == m.end())
        cout<<"NO VALUE";
    else    
        cout<<f1->first<<" "<<f1->second<<endl;



    // erase function 
    cout<<"Mapping after erase function: ";
    m.erase(5);     //5 will be deleted
    m.erase(f1);    //f1 iterator i.e 3 will be deleted
    print(m);

    //clear function
    // m.clear(m);
    // clear all the map container 
    return 0;
}
