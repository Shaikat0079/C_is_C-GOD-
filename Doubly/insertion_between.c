#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *insert_empty(struct node* head,int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
struct node *insert_at_beg(struct node* head,int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
struct node *insert_at_end(struct node* head,int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    struct node *ptr = head;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return head;
}
struct node *addAfterPos(struct node *head,int data,int pos){
    struct node *newP = NULL;
    struct node *temp = head;
    struct node *temp2 = head;
    newP = insert_empty(newP,data);
    while (pos != 1)
    {
        temp = temp->next;
        pos--;
    }
    if(temp->next==NULL){
        temp->next = newP;
        newP->prev = temp;
    }
    else{
        temp2 = temp->next;
        temp->next = newP;
        temp2->prev = newP;
        newP->prev = temp;
        newP->next = temp2;
    }
    return head;
}
int main()
{
    struct node *head=head;
    head = insert_empty(head,22);
    head = insert_at_beg(head,69);
    head = insert_at_beg(head,6);
    head = insert_at_end(head,69);
    head = insert_at_end(head,96);
    head = insert_at_end(head,9);
    head = addAfterPos(head,44,4);
    struct node *t=head;
    while (t!= NULL)
    {
        printf("%d ",t->data);
        t =  t->next;
    }
    
}