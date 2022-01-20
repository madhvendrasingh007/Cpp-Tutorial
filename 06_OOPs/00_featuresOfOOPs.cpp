// Features of Object Oriented Programming
    // 1) Class & Object
    // 2) Encapsulation
    // 3) Polymorphism
    // 4) Data Hiding
    // 5) Dynamic Binding
    // 6) Message Passing
    // 7) Data Abstraction
    // 8) Inheritance



/******************************  Class & Objects  ******************************/
// ->It is a user-defined data type, which holds its own data members and member functions
// -> A C++ class is like a blueprint for an object


// ->An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.






/******************************  Encapsulation  ******************************/
// ->The wrapping up of data members and function members together inside a single unit, called as encapsulation.
// ->Hiding "sensitive" data from the user. 
// ->here Access Modifiers are use: 
        // 1)private
        // 2)public
        // 3)protected

//   access modifier     own class       derived class       outside the class
//       public             yes                 yes                 yes
//       private            yes                 no                  no
//      protected           yes                 yes                 no
// yes  -  can access
// no   -  can't access



// c++ program to explain Encapsulation
  
// #include<iostream>
// using namespace std;
  
// class Encapsulation
// {
//     private:
//         // data hidden from outside world
//         int x;
          
//     public:
//         // function to set value of 
//         // variable x
//         void set(int a)
//         {
//             x =a;
//         }
          
//         // function to return value of
//         // variable x
//         int get()
//         {
//             return x;
//         }
// };
  
// main function
// int main()
// {
//     Encapsulation obj;
      
//     obj.set(5);
      
//     cout<<obj.get();
//     return 0;
// }







/******************************  polymorphism  ******************************/
// ->Poly means many and morphism means forms.
// ->The ability to take more than one form is called as polymorphism. There are two types of polymorphism:



// polymorphism:  1) Compile time: a)Function overloading
//                                 b)Operator overloading
//                2) Runtime: a) Virtual Function 

// 1) Compile time polymorphism: 
// ->This type of polymorphism is achieved by function overloading or operator overloading.



//1.a) Function overloading:
// ->When there are multiple functions with same name but different parameters then these functions are said to be overloaded. Functions can be overloaded by change in number of arguments or/and change in type of arguments.

// C++ program for function overloading
// #include <bits/stdc++.h>

// using namespace std;
// class Geeks
// {
// 	public:
	
// 	// function with 1 int parameter
// 	void func(int x)
// 	{
// 		cout << "value of x is " << x << endl;
// 	}
	
// 	function with same name but 1 double parameter
// 	void func(double x)
// 	{
// 		cout << "value of x is " << x << endl;
// 	}
	
// 	// function with same name and 2 int parameters
// 	void func(int x, int y)
// 	{
// 		cout << "value of x and y is " << x << ", " << y << endl;
// 	}
// };

// int main() {
	
// 	Geeks obj1;
	
// 	// Which function is called will depend on the parameters passed
// 	// The first 'func' is called
// 	obj1.func(7);
	
// 	// The second 'func' is called
// 	obj1.func(9.132);
	
// 	// The third 'func' is called
// 	obj1.func(85,64);
// 	return 0;
// }



// 1.b) Operator overloading:
// ->C++ also provide option to overload operators. For example, we can make the operator (‘+’) for string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. So a single operator ‘+’ when placed between integer operands , adds them and when placed between string operands, concatenates them.


// CPP program to illustrate Operator Overloading
// #include<iostream>
// using namespace std;

// class Complex {
// private:
// 	int real, imag;
// public:
// 	Complex(int r = 0, int i =0) {real = r; imag = i;}
	
// 	// This is automatically called when '+' is used with
// 	// between two Complex objects
// 	Complex operator + (Complex const &obj) {
// 		Complex res;
// 		res.real = real + obj.real;
// 		res.imag = imag + obj.imag;
// 		return res;
// 	}
// 	void print() { cout << real << " + i" << imag << endl; }
// };

// int main()
// {
// 	Complex c1(10, 5), c2(2, 4);
// 	Complex c3 = c1 + c2; // An example call to "operator+"
// 	c3.print();
// }




// 2) Run Time polymorphism
// ->This type of polymorphism is achieved by Function Overriding.

// Function Overriding: occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

// C++ program for function overriding

// #include <bits/stdc++.h>
// using namespace std;

// class base
// {
// public:
// 	virtual void print ()
// 	{ cout<< "print base class" <<endl; }

// 	void show ()
// 	{ cout<< "show base class" <<endl; }
// };

// class derived:public base
// {
// public:
// 	void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
// 	{ cout<< "print derived class" <<endl; }

// 	void show ()
// 	{ cout<< "show derived class" <<endl; }
// };

// //main function
// int main()
// {
// 	base *bptr;
// 	derived d;
// 	bptr = &d;
	
// 	//virtual function, binded at runtime (Runtime polymorphism)
// 	bptr->print();
	
// 	// Non-virtual function, binded at compile time
// 	bptr->show();

// 	return 0;
// }




/******************************  Data Hiding  ******************************/
// ->Data Hiding means protecting the members of a class from an illegal or unauthorized access.
// ->The main difference between data hiding and encapsulation is that data hiding focus more on data security and encapsulation focuses more on hiding the complexity of the system. 



/******************************  Dynamic Binding  ******************************/
// ->The binding up of the function call with its code at run time is called as dynamic binding.
// ->C++ has virtual functions to support this.





/******************************  Message Passing  ******************************/
// ->The communication of data from calling function to called function, in the form of arguments passed to the function, is called as message passing.


/******************************  Data Abstraction  ******************************/
// ->Showing only the data which is required and hiding the unnecessary background details is called as data abstraction.



/******************************  Inheritance  ******************************/
// ->The ability of one class (called as child class or derived class), to acquire properties from another class (called as parent class or base class), is called as inheritance. The following are the types of inheritance:
        // i) Single inheritance
        // ii) Multiple inheritance
        // iii) Multilevel inherirtance
        // iv) Hierarchical inheritance
        // v) Hybrid inheritance