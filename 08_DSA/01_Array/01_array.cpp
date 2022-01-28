/*Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.*/


/*  Advantages of C++ Array
    -> Code Optimization (less code)
    -> Random Access
    -> Easy to traverse data
    -> Easy to manipulate data
    -> Easy to sort data etc.

    Disadvantages of C++ Array
    -> Fixed size (i.e weather it will be int || float || char etc.)
*/


//Array Declaration
    // dataType arrayName[arraySize];


/*Insertion in an Array

M1: string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

M2: int marks[4];
    marks[0] = 12;
    marks[1] = 15;
    marks[2] = 19;
    marks[3] = 18;
*/


// Program to enter 5 no. in an array and displaying them

#include<iostream>
using namespace std;

int main(){
    int a[5];

    for(int i=0; i<5; i++){
        cout<<"Enter the input: ";
        cin>>a[i];
    }
    cout<<endl<<"The no. are: ";
    for(int i=0;i<5;i++){
        cout<<" "<<a[i];
    }
    return 0;
}