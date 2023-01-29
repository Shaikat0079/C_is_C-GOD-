#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *addElement(struct node *head,int element){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = element;
    newNode->link = NULL;
    struct node *ptr = head;
    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link = newNode;
    return head;
}
void printLL(struct node *head){
    struct node *ptr = head;
    while (ptr!=NULL)
    {   
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 50;
    head->link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current->data=60;
    current->link = NULL;
    head->link = current;
    current = malloc(sizeof(struct node));
    current->data = 80;
    current->link = NULL;
    head->link->link = current;
    current = malloc(sizeof(struct node));
    current->data = 100;
    current->link = NULL;
    head->link->link->link=current;
    addElement(head,5);
    printLL(head);
}