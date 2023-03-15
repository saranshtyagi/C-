// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
    int count=0;
    Node* temp=head;
    
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    
    if(count%2==0){
        return false;
    }
    else{
        return true;
    }
}
