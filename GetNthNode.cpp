int GetNth(struct node* head, int index){
  node* temp=head;
  int count=0;
  while(count<index-1){
      temp=temp->next;
      count++;
  }
  return temp->data;
}
