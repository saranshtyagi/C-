// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int modularNode(Node* head, int k)
{
	Node* temp=head;
	int i=1;
	int ans=-1;
	
	while(temp!=NULL){
	    if((i%k)==0){
	        ans=temp->data;
	    }
	    i++;
	    temp=temp->next;
	}
	return ans;
}
