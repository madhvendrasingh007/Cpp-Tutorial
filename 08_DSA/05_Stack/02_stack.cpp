#include<iostream>
using namespace std;

#define n 100 

class stack{
    int* arr;
    int top;

    public: 
    stack(){
        arr = new int[n];
        top = -1;
    }

    // PUSH operation
    void push(int x){
        if(top == n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    // POP operation
    void pop(){
        if(top == -1){
            cout<<"No elements to pop"<<endl;
        }
        top--;
    }

    // TOP operation
    int Top(){
        if(top == -1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    // EMPTY operation
    bool empty(){
        return top == -1;
    }
};

int main(){
    stack st;

    // pushing elements
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<"Top element of the stack is: "<<st.Top()<<endl;

    st.pop();
    cout<<"Top element after pop: "<<st.Top()<<endl;

    st.pop();
    st.pop();
    st.pop();
    cout<<"Is stack empty: "<<st.empty()<<endl;
return 0;
}
