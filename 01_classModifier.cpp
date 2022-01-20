#include<iostream>
using namespace std;

class emp{
    private:
        int a,b,c;
    public:
        int d,e;
    void setdata(int a1,int b1,int c1);    //declaration
    void getdata();
};

void emp :: getdata(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;

}

void emp :: setdata(int a1,int b1,int c1){
        a = a1;
        b = b1;
        c = c1; 
}

int main(){
    emp md;
    // md.a=122  --> this will show error as it is a private member
    md.d=12;
    md.e=82;
    md.setdata(1,2,4);
    md.getdata();
    return 0;
}