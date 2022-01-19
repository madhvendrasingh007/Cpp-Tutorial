# include<iostream>
using namespace std;

int c = 20;                 //Global Variable
int glo = 10;               //Global Variable

void sum(){                 //Function 'sum'
    int a;
//  cout << a;   if a is print here then 10 will print as it'll read cout in sum func.    
} 

int main(){
    int glo = 30;           //Local Variable
    //  glo = 20;           //glo change value according to local variable
    sum();                  //function calling
    cout << glo;            //Precedence of local variable is more than Global
    /*Global variable can have same name of local variable but the prioirity of local 
    will be more over global variable.
    */
    
    
    //global variable 
    /*
    int a,b,c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    c = a + b;      //Local variable
    cout<<"the sum of a and b is: "<<c<<endl;
    cout<<"the value of global c is: "<<::c;        //to get c as global variable in output, :: -> Scope resolution operator

    // float d = 13.4F;
    // long double e = 13.4L;
    // if we want 13.4 as float then use '13.4f' by default 13.4 will be in long double and vice versa 13.4l 
    // cout<<"THe size of 13.4 is "<<sizeof(13.4)<<endl;
    // cout<<"THe size of 13.4f is "<<sizeof(13.4f)<<endl;
    // cout<<"THe size of 13.4F is "<<sizeof(13.4F)<<endl;
    // cout<<"THe size of 13.4l is "<<sizeof(13.4l)<<endl;
    // cout<<"THe size of 13.4L is "<<sizeof(13.4L)<<endl;
    */
    return 0;
}


