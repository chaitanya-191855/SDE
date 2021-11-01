#include <iostream>
using namespace std;
struct node
{
    int val;
    node *next;
};
void append(node** head,int data){
    node *newnode=new node();
    newnode->val=data;
    newnode->next=NULL;
    node *curr=*head;
    if(*head==NULL){
        *head=newnode;
        return;
    }
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newnode;
    return;
}
void reverseprint(node* head){
    node* curr=head;
    if(curr->next==NULL){
        cout<<curr->val<<" ";
        return;
    }
    reverseprint(curr->next);
    cout<<curr->val<<" ";
}
void Reverse(node* head){
    node* ptr=head;
    if(ptr->next=NULL){
        
    }
}
int main() {
	node *head=NULL;
	append(&head,20);
	append(&head,30);
	append(&head,40);
	node* dummy=head;
	cout<<"elements of list :"
	while(dummy!=NULL){
	    cout<<dummy->val<<" ";
	    dummy=dummy->next;
	}
	cout<<"\n";
	cout<<"print elements in reverse:";
	reverseprint(head);
	cout<<"reverse linked list:";
	head=Reverse(head);
	node *ans=head;
	while(ans!=NULL){
	    cout<<ans->val<<" ";
	    ans=ans->next;
	}
	return 0;
}
