//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
    //checks if heads are NULL
    if(head1==NULL || head2==NULL){
        return false;
    }
    //assign pointers to respective heads
    Node* temp1= head1;
    Node* temp2=head2;
    
    //traverse through ends of both lists
    while(temp1!=NULL && temp2!=NULL){
        //checks if data are not identical->returns false
        if(temp1->data!=temp2->data){
            return false;
        }
        //moves to the next node
        temp1=temp1->next;
        temp2=temp2->next;
    }
    //checks if the list have ended and returns true
    return temp1==NULL && temp2==NULL;
}
