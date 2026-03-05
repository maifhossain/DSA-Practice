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

void Insert_at_any_position(Node* &head, int indx, int data){
    Node* newnode = new Node(data);
    Node* temp = head;
    for(int i=1;i<indx;i++){
        temp=temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    
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

    Insert_at_any_position(head,2, 100);
    Print_Linkedlist(head);
    



    return 0;
}