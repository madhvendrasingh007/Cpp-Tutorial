// largest word in a sentence
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of words: ";
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cout<<"Enter the word: ";
    cin.getline(arr, n); //it is used to accept the whole sentence with the space
    cin.ignore();

    int i=0;

    int currLen=0, maxLen=0;    //used to get the length of the largest word
    int st=0, maxst=0;  //used to get the largest word

    while(1){

        if(arr[i] == ' ' || arr[i] == '\0')     //if we encounter a space or a null character
        {
            if(currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st=i+1;
        }
        else
        currLen++;

        if(arr[i] == '\0')
            break;
        i++;
    }

    cout<<"The length of the largest word is: "<<maxLen<<endl<<"And the word is: ";

    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[i+maxst];
    }
    
return 0;
}