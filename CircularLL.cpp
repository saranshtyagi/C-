#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
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

void insertNode(Node* &tail, int element, int d){
    
    //empty list
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr= tail;

        while(curr->data!=element){
            curr=curr->next;
        }

        //element found, curr is representing element
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp; 
    }
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        //non-empty
        //assuming that the value is present is the linked list
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //1 node linked list
        if(curr==prev){
            tail=NULL;
        }
        //2 node linked list
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &tail){
    Node* temp=tail;

    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
}

int main(){
    Node* tail=NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    deleteNode(tail, 5);
    print(tail);
    return 0;
}