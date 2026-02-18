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

int main(){

    Node* head = new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40); 

    head->next = a;
    a->next = b;
    b->next = c;


    //cout<<head->data<<endl;
    //cout<<head->next->data<<endl;
    //cout<<head->next->next->data<<endl;
    //cout<<head->next->next->next->data<<endl;

    Node* temp= head;


    while(temp !=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

    temp = head;



    return 0;
}