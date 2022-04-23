/*
Pair is used to combine together two values that may be different in type. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    //pair is a class which stores two values
    pair<int,string> p;
    pair<int,char> id;
    
    //pair initialization and Access 
    cout<<"pair initialization method1: "<<endl;
    p = make_pair(1,"Madhvendra");
    cout<<p.first<<" "<<p.second<<endl;

    //another method to initialize pair
    cout<<"pair initialization method2: "<<endl;
    id.first = 100;
    id.second = 'd';
    cout<<id.first<<" "<<id.second<<endl;


    //another method to initialize pair
    cout<<"pair initialization method3: "<<endl;
    pair<int,string> q;
    q={2,"Singh"};
    cout<<p.first<<" "<<q.second<<endl;


    //pair of array
    cout<<"pair of array: "<<endl;
    pair<int,int> array[3];
    array[0]={1,2};
    array[1]={2,3};     //p1 = 1,2,3
    array[2]={3,4};     //p2 = 2,3,4

    for(int i=0; i<3; i++)
        cout<<array[i].first<<" "<<array[i].second<<endl;

    
    //swapping of index 0 and index 2
    cout<<"pair after swap: "<<endl;
    swap(array[0], array[2]);
    for(int i=0; i<3; i++)
        cout<<array[i].first<<" "<<array[i].second<<endl;
return 0;
}
