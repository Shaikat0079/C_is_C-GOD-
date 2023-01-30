#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void add_at_end(struct node *head,int data){
    struct node *ptr = head;
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = newNode;
}
void add_at_pos(struct node *head,int data,int pos){
    struct node *ptr = head;
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;
    pos--;
    while(pos!=1){
        ptr=ptr->link;
        pos--;
    }
    newNode->link = ptr->link;
    ptr->link = newNode;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 22;
    head->link = NULL;
    add_at_end(head,50);
    add_at_end(head,10);
    add_at_end(head,56);
    add_at_pos(head,69,3);
    struct node *ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    
}