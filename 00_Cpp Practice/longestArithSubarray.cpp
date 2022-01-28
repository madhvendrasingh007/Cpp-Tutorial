/*PROBLEM: https://drive.google.com/drive/folders/1-PNukHSuFB4NsmGI1U4772DBXr3eOoxR

An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9,10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans=2;
    int pd = a[1]-a[0];
    int j=2;
    int curr = 2;

    while(j<n){
        if(pd == a[j] - a[j-1]){
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
return 0;
}



/*
Steps
1. While iterating in the array we need to maintain the following variables,
    a. Previous common difference (pd) - To compare it with current common difference (a[i] - a[i-1]).
    b. Current arithmetic subarray length (curr) - It denotes the arithmetic subarray length including a[i].
    c. Maximum arithmetic subarray length (ans) - It denotes the max.Arithmetic subarray length till a[i].
2. While iterating, there will be two cases,
    a. pd = a[i] - a[i-1]
        i. Increase curr by 1
        ii. ans = max(ans, curr)

3. After loop ends, output the answer. (stored in ans variable).
*/