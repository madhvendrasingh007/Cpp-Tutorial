#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int> &st, int element){

    if(st.empty()){
        st.push(element);
        return;
    }

    int topElement = st.top();
    st.pop();
    insertAtBottom(st,element);

    st.push(topElement);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }

    int element = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,element);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    // if reverse function is not used then the output will be 4 3 2 1
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
}
