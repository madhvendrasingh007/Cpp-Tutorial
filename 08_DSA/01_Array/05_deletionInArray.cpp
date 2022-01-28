/*
Programming a deletion differs very slightly from programming an insertion. In insertion, we had to shift elements to their adjacent right to create a void at the desired place to insert a new element, but in deletion, we’ll shift the elements to their adjacent left to fill the void created after deleting an element at some index.
*/

#include <iostream>
using namespace std;
 
void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
void indDeletion(int arr[], int size, int index)
{
    // code for Deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }  
}
 
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 0;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}
