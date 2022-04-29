/*
Sets are a type of associative containers in which each element has to be unique because the value of the element identifies it. The values are stored in a specific order. 

Sets are the set of keys whereas maps are set of keys and values

Syntax:
            set<datatype> setname;

Types:
            1.  Ordered Sets
            2.  Unordered Sets
            3.  Multisets

stored in the unique and sorted order same as maps
*/

#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    // METHOD-1 (range based)
    for(string value : s){
        cout<<value<<endl;
    }

    // METHOD-2
    // for(auto it=s.begin(); it!=s.end();++it)
    //     cout<<(*it)<<endl;
}

int main(){
    // set initialization 
    set<string> s;

    // set insertion
    s.insert("madhav");     // O(log(n))
    s.insert("md");
    s.insert("madhvendra");

    // accessing the sets
    //method 1
    // set<string> :: iterator it = s.find("md");
    //method 2
    auto it = s.find("md");

    // if value does'nt exist
    if(it != s.end())
        cout<<(*it);

    cout<<endl<<"All container: "<<endl;
    print(s);
    cout<<"Elements after erase: "<<endl;
    s.erase("madhav");
    print(s);

    //unordered_set<string> s;
    //multiset<string> s;   duplicates in multiset is allowed whereas ordered set display elements once even if it has more than one frequency 
    // in multiset if iterator is passed i.e (it) then the one of the element will be deleted whereas if actual value is passed then all the elements will get deleted
    //therefore, m[1]={"abc"} m[2]={"abd"} m[3]={"abc"}
    // multiset s.erase("abc") - m[1,3] will be deleted
    // s.erase(it) only m[1] will be deleted
    return 0;
}
