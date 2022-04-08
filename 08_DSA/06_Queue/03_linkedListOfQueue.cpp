#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* front;
    node* back;

    public: 
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        // Create a new LL node
        node* n=new node(x);


        // If queue is empty, then
        // new node is front and rear both
        if(front == NULL){
            back=n;
            front=n;
            return;
        }
        // Add the new node at
        // the end of queue and change rear
        back->next=n;
        back=n;
    }

    // Function to remove
    // a key from given queue q
    void pop(){

        // If queue is empty, return NULL.
        if(front==NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }

        // Store previous front and
        // move front one node ahead
        node* todelete=front;
        front=front->next;

        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"no element in queue"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;
return 0;
}
