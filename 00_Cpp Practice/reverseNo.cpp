#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rev=0;

    while (num>0)
    {
        // remainder contains the last digit
        int lastdigit = num%10;

        rev = rev*10 + lastdigit;
        
        // removing last digit from the orignal number
        num = num/10;
    }

    cout<<rev;
return 0;
}