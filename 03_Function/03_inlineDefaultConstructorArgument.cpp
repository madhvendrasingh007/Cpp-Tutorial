#include<iostream>
using namespace std;

inline int product(int a, int b){       //it must be used for lesser code of a function
    //if it used for large code then it will used more memory and cache
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    
    return a*b;

    //inline replaces the calling function with the function code
    //simply a*b is replaced with product(a,b) in compile time so it will be faster
    //C++ inline function is powerful concept that is commonly used with classes. If a function is inline, the compiler places a copy of the code of that function at each point where the function is called at compile time.
}

float moneyReceived(int currentMoney, float factor=1.04){           //here factor is default argument
    return currentMoney * factor;
}

// int strlen(const char *p){       here p is constant

// }
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}


// When a function gets called, it takes a lot of extra time in executing instructions for tasks like jumping to the function, saving registers, pushing arguments into the stack and returning to the calling function. When a function is small, a substantial percentage of execution time may be spent in such overheads. To eliminate the cost of calls to small functions, C++ proposes a new feature called as inline function. An inline function is a function that is expanded in line when it is invoked. That is, the compiler replaces the function call with the corresponding function code (something similar to macro expansion. But in macros, usual error checking does not occur during compilation). To make the function as inline, we precede the function name with the keyword inline, in the function definition. Inline functions must be defined before they are called.