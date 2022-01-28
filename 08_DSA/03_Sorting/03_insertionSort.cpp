/*Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort works similarly as we sort cards in our hand in a card game.

We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.

*/

#include<iostream>
using namespace std;

int main(){
    //Enter no. of elements
    int n;
    cout<<"Enter no. of Elements: ";
    cin>>n;

    //Enter elements
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Sorting Elements
    for(int i=1;i<n;i++){       //start from 1 index not from 0 index
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    //Sorted array
    cout<<"Sorted Elements: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}