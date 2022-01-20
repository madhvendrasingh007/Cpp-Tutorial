// Destructor is a member function which destructs or deletes an object.It free up the memory

// Syntax:
//        ~constructor-name();


#include <iostream>  
using namespace std;

int count = 0;

class Employee  
 {  
   public:  
        Employee()    
        {   ::count++;
            cout<<"Constructor Invoked"<<::count<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<::count<<endl;    
            ::count--;
        }  
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    return 0;  
}  



// Properties of Destructor:

// Destructor function is automatically invoked when the objects are destroyed.
// It cannot be declared static or const.
// The destructor does not have arguments.
// It has no return type not even void.
// An object of a class with a Destructor cannot become a member of the union.
// A destructor should be declared in the public section of the class.
// The programmer cannot access the address of destructor.