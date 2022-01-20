/********************************Example 1********************************/

// #include<iostream>
// using namespace std;
// class c2;

// class c1{
//     int val1;
//     friend void exchange(c1 & , c2 &);
//     public:
//         void indata(int a){
//             val1 = a;
//         }

//         void display(void){
//             cout<< val1 <<endl;
//         }
// };

// class c2{
//     int val2;
//     friend void exchange(c1 &, c2 &);
//     public:
//         void indata(int a){
//             val2 = a;
//         }

//         void display(void){
//             cout<< val2 <<endl;
//         }
// };
// /*
// Trick to swap 2 numbers a and b:
// temp = a;
// a = b;
// b = temp;

// */
// void exchange(c1 &x, c2 &y){
//     int tmp = x.val1;
//     x.val1 = y.val2;
//     y.val2 = tmp;
// }

// int main(){
//     c1 oc1;
//     c2 oc2;

//     oc1.indata(34);
//     oc2.indata(67);
//     exchange(oc1, oc2);

//     cout<<"The value of c1 after exchanging becomes: ";
//     oc1.display();
//     cout<<"The value of c2 after exchanging becomes: ";
//     oc2.display();
    
//     return 0;
// }



/********************************Example 2********************************/
#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}

int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}
