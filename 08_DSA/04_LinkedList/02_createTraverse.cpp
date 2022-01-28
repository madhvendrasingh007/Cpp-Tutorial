 // Linked list implementation (Creation and traversal) in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a node
struct Node {
    int data;
    struct Node* next;
};

void LinkedListTraversal(struct Node* ptr){
    while (ptr!=NULL)
    {
        cout <<"Elements: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
}

int main() {
  struct Node* head;
  struct Node* second;
  struct Node* third;

  // allocate memory for nodes in the liked list in heap
  head = new Node();
  second = new Node();
  third = new Node();
  /*
  or
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));
  */

  // Assign value values
  head->data = 11;
  second->data = 7;
  third->data = 43;

  // Connect nodes
  head->next = second;
  second->next = third;
  third->next = NULL;
  LinkedListTraversal(head);
}