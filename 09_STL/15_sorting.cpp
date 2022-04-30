//quick, heap, insertion sort, all are used in these sorting technique
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    //sorting using vectors
    vector<int> vec{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
 
    sort(vec.begin(), vec.end());
 
    cout << "Sorted \n";
    for (auto x : vec)
        cout << x << " ";
    return 0;
}
