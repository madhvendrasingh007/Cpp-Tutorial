#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='0' && s[i]<='9'){     //check whether the input is operand or not
            st.push(s[i]-'0');      //s[i] is char, to convert char to int -'0' is used    

        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.top();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            
            }
        }
    }
    return st.top();
    
}

int main(){
    cout<<postfixEvaluation("46+2/5*7+");
return 0;
}

//4 6 + 2 / 5 * 7 +
