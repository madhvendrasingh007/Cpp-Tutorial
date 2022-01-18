/*              nCr =  n!/((n-r)! * r!)
1               0c0
11              1C0 1C1
121             2C0 2C1 2C2
1331            3C0 3C1 3C2 3C3
14641           4C0 4C1 4C2 4C3 4C4
*/

#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=2;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
return 0;
}