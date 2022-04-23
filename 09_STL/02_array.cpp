#include<iostream>
#include<array>     //STL array library
using namespace std;

int main(){
    int basic[5] = {12,3,2,1,4};

    array<int,5> stl = {4,1,2,3,12};

    int size = stl.size();      //size of stl array

    //traverse
    for(int i=0; i<size; i++){      
        cout<<stl[i]<<endl;
    }

    //"at" operation
    cout<<"Element at 2nd index is: "<<stl.at(2)<<endl;

    //empty or not (0-not empty, 1-empty)
    cout<<"Empty or not: "<<stl.empty()<<endl;

    //first and last element
    cout<<"First element is: "<<stl.front()<<endl;
    cout<<"Last element is: "<<stl.back()<<endl;
    return 0;
}
