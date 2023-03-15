class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        //base call:
        if(head==NULL){
            return NULL;
        }
        //Reverse first 2 nodes:
        Node* next=NULL;
        Node* curr=head;
        Node* prev=NULL;
        int cnt=0;
        
        while(curr!=NULL && cnt<2){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        //Recursion will see the rest:
        if(next!=NULL){
            head->next=pairWiseSwap(next);
        }
        // Return head of the reversed list:
        return prev;
    }
};
