#include<bits/stdc++.h>
using namespace std;



class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void Insert_At_Head(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
};

void Print_Linkedlist(Node* &head){
    Node* temp = head;
    while(temp !=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

    

}

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    Insert_At_Head(head, 100);
    Print_Linkedlist(head);
    



    return 0;
}