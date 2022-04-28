// Ordered map display sorted elements whereas Unordered map display elements in the same manner as given

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,string> m;    //unordered map uses in-built hash table whereas ordered map compares every key with the next key and arranges in decreasing order
    m[1] = "md";
    m[4] = "madhav";
    m[2] = "jai";
    m[3] = "jatin";

    for(auto &pr : m)
        cout<<pr.first<<" "<<pr.second<<endl;
    return 0;
}


/*  Unordered map-O(1)          Ordered map-O(log(n))
    3 jatin                     1 md
    2 jai                       2 jai
    4 madhav                    3 jatin
    1 md                        4 madhav
*/
