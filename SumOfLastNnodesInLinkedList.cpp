//function should return sum of last n nodes
int getLength(Node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
int sumOfLastN_Nodes(struct Node* head, int n)
{
    Node* temp=head;
    int cnt=0,sum=0;
    int len=getLength(head);
    int val=len-n;
    while(val){
        temp=temp->next;
        val--;
    }
    while(temp!=NULL){
        sum=sum+(temp->data);
        temp=temp->next;
    }
    return sum;
}
