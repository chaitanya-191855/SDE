#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node *prev;
};
void push(Node **head,int data)
{
    Node *newnode=new Node();
    newnode->data=data;
    newnode->next=*head;
    newnode->prev=NULL;
    if(*head!=NULL){
        (*head)->prev=newnode;
    }
    *head=newnode;
}
void append(Node **head,int data){
    Node *newnode=new Node();
    newnode->data=data;
    newnode->next=NULL;
    Node *last=*head;
    if(head==NULL){
        newnode->prev=NULL;
        (*head)=newnode;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    newnode->prev=last;
    last->next=newnode;
    return;
}
void insert(Node *prenode,int data){
    if(prenode==NULL){
        return;
    }
    Node *newnode=new Node();
    newnode->data=data;
    newnode->prev=prenode;
    newnode->next=prenode->next;
    prenode->next=newnode;
}
int main() {
    Node *head=NULL;
    push(&head,1);
    insert(head->next,46);
    push(&head,2);
    push(&head,3);
    append(&head,4);
    insert(head->next,25);
    while(head!=NULL){
        cout<<head->data<<"\n";
        head=head->next;
    }
    return 0;
}
