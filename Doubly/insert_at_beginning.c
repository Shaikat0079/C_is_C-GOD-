#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_aNode(struct node *head,int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
struct node *insert_beg(struct node *head,int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
int main()
{
    struct node *head = NULL;
    head = add_aNode(head,22);
    head = insert_beg(head,69);
    head = insert_beg(head,6);
    head = insert_beg(head,9);
    struct node *ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    
}