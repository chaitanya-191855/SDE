Node* reverseDLL(Node * head)
{
    //Your code here
    Node *temp=NULL;
    while(head!=NULL){
        Node *nextnode=head->next;
        head->next=temp;
        head->prev=nextnode;
        temp=head;
        head=nextnode;
    }
    return temp;
}
