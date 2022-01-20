/********************* Parameterized Constructor *********************/
#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

int main(){
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}



/********************* Default Constructor *********************/
// C++ program to demonstrate the use of default constructor

// #include <iostream>
// using namespace std;

// // declare a class
// class  Wall {

//   private:
//        double length;

//    public:
//     // create a constructor
//     Wall() {

//         // initialize private variables
//         length = 5.5;

//         cout << "Creating a wall." << endl;
//         cout << "Length = " << length << endl;
//     }
// };

// int main() {

//     // create an object
//     Wall wall1;

//     return 0;
// }