#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            cout<<"Enter the id of employee"<<endl;
            cin>>id;
        }
        void getId(){
            cout<<"The id of this employee is: "<<id<<endl;
        }
};

int main(){
    // Employee md, rohan, raj;
    // md.setId();
    // md.getId();
    
    // above method is useful for smaller data but for larger no. of employee we need to create array
    // array of object
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}