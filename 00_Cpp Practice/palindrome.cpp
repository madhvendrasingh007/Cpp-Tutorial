// A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam or racecar.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of words: ";
    cin>>n;

    char arr[n+1];
    cout<<"Enter a word: ";
    cin>>arr;

    bool check =1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
    }

    if(check == true)
    {
        cout<<"Word is a palindrome";
    }
    else
    {
        cout<<"Word is not a palindrome";
    }
return 0;
}