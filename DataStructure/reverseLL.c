#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *reverseLL(struct node *head){
    struct node *prev = NULL;
    struct node *next = NULL;
    while (head!=NULL)
    {
        next=head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 69;
    head->link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current->data = 22;
    current->link = NULL;
    head->link = current;
    current = malloc(sizeof(struct node));
    current ->data = 1;
    current->link = NULL;
    head->link->link = current;
    current = malloc(sizeof(struct node));
    current ->data = 66;
    current->link = NULL;
    head->link->link->link = current;
    current = malloc(sizeof(struct node));
    current ->data = 96;
    current->link = NULL;
    head->link->link->link->link = current;
    head = reverseLL(head);
    struct node *ptr =head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    
}