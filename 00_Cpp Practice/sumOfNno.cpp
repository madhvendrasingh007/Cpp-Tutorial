#include<iostream>
using namespace std;

int sum(int num){
    int ans=0;
    for(int i=0;i<num;i++){
        ans += i;
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<sum(num);

    return 0;
}