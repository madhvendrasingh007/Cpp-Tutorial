/*Problem: Given an array a[] of size n. For every i froom 0 to n-1 output max(a[0],....,a[i]).

for example:    (0)     (1)     (2)     (3)     (4)     (5)
                 1       0       5       4       6       8
        MAX:     1       1       5       5       6       8
               max=1  max(0,1) max(1,0,5) ...
*/

#include<iostream>
using namespace std;

int main(){
    int mx = -1999999;
    //no. of elements
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;

    //Enter elements
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
return 0;
}