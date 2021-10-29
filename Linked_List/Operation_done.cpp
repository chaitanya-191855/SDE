#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
void insertAfter(Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
 
void append(Node** head_ref, int new_data)
{
    
    Node* new_node = new Node();
    Node *last = *head_ref; 
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}
void deleteNode(Node** head_ref, int key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;
     
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }

    else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    if (temp == NULL)
        return;

    prev->next = temp->next;

    delete temp;
    }
}
void display(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
int main() {
	// your code goes here
    Node* head =NULL;
    
    append(&head, 6);
   
    push(&head, 7);
     
    push(&head, 1);
     
    append(&head, 4);
   
    insertAfter(head->next, 8);
    cout<<"created linked list:";
    display(head);
    cout<<"\n";
    deleteNode(&head, 1);
    
    cout<<"after deleteing elements in Linked list is: ";
    display(head);
     
    return 0;
}

output::
	created linked list: 1 7 8 6 4
    after deleteing elements in Linked list is:  7 8 6 4
