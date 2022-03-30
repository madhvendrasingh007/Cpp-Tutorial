/*
Bubble Sort Algorithm is used to arrange N elements in ascending order, and for that, you have to begin with 0th element and compare it with the first element. If the 0th element is found greater than the 1st element, then the swapping operation will be performed, i.e., the two values will get interchanged. In this way, all the elements of the array get compared.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int counter=1;      // for iterations
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    cout<<"Sorted Elements: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
