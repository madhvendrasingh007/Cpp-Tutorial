#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector initialize
    vector<int> vec = {2,3,4,5,6};
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    //vector display
    vector<int> :: iterator it = vec.begin();
    // cout<<(*it)<<" "<<(*it+1);
    // or
    for(it=vec.begin(); it!=vec.end();++it)     //++it moves to next iterator (0 --> 2) whereas it+1 move to next location(0 --> 1)
        cout<<(*it)<<" ";
    cout<<endl;

    // iterator point to pair
    vector<pair<int,int>> v_p = {{1,2}, {2,3}, {3,4}};
    vector<pair<int,int>> :: iterator it1;
    for(it1=v_p.begin(); it1!=v_p.end(); ++it1)
        cout<<(*it1).first<<" "<<(*it1).second<<endl;;
    // (*it1).first == (it1->first)
    for(it1=v_p.begin(); it1!=v_p.end(); ++it1)
        cout<<(it1->first)<<" "<<(it1->second)<<endl;;
     
    
    return 0;
}
