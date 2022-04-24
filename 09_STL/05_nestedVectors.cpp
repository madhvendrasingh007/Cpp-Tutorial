#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> vec){
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    cout<<endl;
}
void printVec1(vector<int> ve){
    for(int i=0; i<ve.size(); i++)
        cout<<ve[i]<<" ";
    cout<<endl;
}

int main(){
    // vector of pair
    vector<pair<int,int>> vec1 = {{1,2} , {2,3} , {3,4}};
    printVec(vec1);

    //user defined vector of pair
    vector<pair<int,int>> vec2;
    cout<<"enter size of vector2: ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        vec2.push_back({x,y});      // or v.push_back(make_pair)(x,y)
    }
    printVec(vec2);




    // array of vector
    //Therefore, array of vectors is two dimensional array with fixed number of rows where each row is vector of variable length. 
    //Each index of array stores a vector which can be traversed and accessed using iterators.

    cout<<"enter the number of array: ";
    int n1;
    cin>>n1;
    vector<int> vect3[n1];
    for(int i=0; i<n1; ++i){
        int siz;
        cin>>siz;
        for(int j=0;j<siz;++j){
            int x;
            cin>>x;
            vect3[i].push_back(x);
        }
    }
    for(int i=0; i<n1; ++i){
        printVec1(vect3[i]);
    }
    /*input
    3
    3
    1 2 3
    4
    1 2 3 4
    2
    1 2
    */
    return 0;
}
