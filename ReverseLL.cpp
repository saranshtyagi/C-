#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

Node* reverse(Node* head){
    //for empty LL or single node:
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 14);
    insertAtTail(tail, 16);
    insertAtTail(tail, 18);
    insertAtTail(tail, 20);
    print(head);
    cout<<endl;
    reverse(head);
    print(head);
    return 0;
}