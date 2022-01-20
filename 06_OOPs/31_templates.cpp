//Function Templates We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray(). 

#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T>
T myMax(T x, T y)
{
return (x > y)? x: y;
}

int main()
{
cout << myMax<int>(3, 7) << endl; // Call myMax for int
cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
cout << myMax<char>('g', 'e') << endl; // call myMax for char

return 0;
}


//Class Template
// #include <iostream>  
// using namespace std;  
// template<class T>  
// class A   
// {  
//     public:  
//     T num1 = 5;  
//     T num2 = 6;  
//     void add()  
//     {  
//         std::cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
//     }  
      
// };  
  
// int main()  
// {  
//     A<int> d;  
//     d.add();  
//     return 0;  
// } 