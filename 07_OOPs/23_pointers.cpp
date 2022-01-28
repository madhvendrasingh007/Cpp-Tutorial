#include<iostream>
using namespace std;

int main(){
    //Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    cout<<"The address of a is "<<(ptr)<<endl;

    //New operator           dynamically initialized
    int *p = new int(40);
    cout<<"The value of a is "<<*(p)<<endl;

    //Array
    int *arr = new int[3];
    arr[0] = 5;
    arr[1] = 10;  //or *(arr+1) = 10
    arr[2] = 20;  //or *(arr+2) = 20
    // delete[] arr;      arr array will be deleted and give random values
    for(int l=0;l<3;l++){
        cout<<arr[l]<<endl;
    }
    return 0;
}