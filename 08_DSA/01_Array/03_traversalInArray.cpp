#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    display(arr,4);
return 0;
}