#include<bits/stdc++.h>
using namespace std;

// Node class represents each element in the linked list
class Node{
    public:
    int data;      // stores the value of the node
    Node* next;    // pointer to the next node

    // Constructor to initialize node with a value
    Node(int data){
        this->data = data;  // set node data
        this->next = NULL;  // next is NULL initially
    }
};

int main(){

    // Create the first node (head of the list)
    Node* head = new Node(10);

    // Create additional nodes
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40); 

    // Link the nodes together to form the list
    head->next = a;  // head -> a
    a->next = b;     // a -> b
    b->next = c;     // b -> c

    // Examples of accessing nodes directly (commented out)
    // cout << head->data << endl;
    // cout << head->next->data << endl;
    // cout << head->next->next->data << endl;
    // cout << head->next->next->next->data << endl;

    // Use a temporary pointer to traverse the list
    Node* temp = head;

    // Traverse the linked list until temp becomes NULL
    while(temp != NULL){
        cout << temp->data << endl;  // print current node's data
        temp = temp->next;           // move to the next node
    }

    // Reset temp to head if needed later
    temp = head;

    return 0;
}