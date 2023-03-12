//Implemenatation of node creation:

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //Constructor:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //Destructor

    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void insertAtHead(Node* &head, int d){
    // new node create
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;  
}

void insertAtPos(Node* &head, int pos, int d){
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void insertAtTail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void deleteNode(int position, Node* &head){
    //deleting first node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free first node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){

    Node* node1= new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1
    // Node* head= node1;
    // print(head);

    // insertAtHead(head, 12);
    // print(head);
    Node* head=node1;
    Node* tail=node1;
    
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtPos(head, 3, 22);
    deleteNode(2, head);
    print(head);
    return 0;
}