#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;
    // static int count=100;  cant give value of count here

public:
    void setdata(void){
        cout<<"Enter your id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"your id is"<<endl;
        cout<<id<<endl<<"employee no. is: "<<count<<endl;
    }
    static void getCount(void){
        
        cout<<"The value of count is: "<<count<<endl;
    }
};

int Employee :: count;  //default value is 0
// int Employee :: count = 100;  ucan define value of count here

int main(){
    Employee md,rohan,raj;
    // count will be accessible for all the objects declared above
    Employee :: getCount();
    md.setdata();
    md.getdata();
    
    Employee :: getCount();
    rohan.setdata();
    rohan.getdata();
    
    Employee :: getCount();
    raj.setdata();
    raj.getdata();
    return 0;
}