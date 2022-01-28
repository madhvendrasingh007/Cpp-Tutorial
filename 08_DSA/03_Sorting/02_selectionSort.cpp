/*
In this method, to sort the data in ascending order, the 0th element is compared with all other elements. If the 0th element is found to be greater than the compared element, the two values get interchanged. In this way after the first iteration, the smallest element is placed at 0th position. The technique is repeated until the full array gets sorted.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;

    cout<<"Enter Elements: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout<<"Sorted Element: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}