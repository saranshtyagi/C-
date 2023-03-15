class Solution
{
    public:
    Node* RevKNodes(struct Node* head) 
    {
        //base call:
        if(head==NULL){
            return NULL;
        }
        //Reverse first k nodes:
        Node* next=NULL;
        Node* curr=head;
        Node* prev=NULL;
        int cnt=0;
        
        while(curr!=NULL && cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        //Recursion will see the rest:
        if(next!=NULL){
            head->next=RevKNodes(next);
        }
        // Return head of the reversed list:
        return prev;
    }
};
