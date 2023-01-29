#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* link;
};
struct node* add_at_end(struct node *ptr,int data){
    struct node *newNode  = malloc(sizeof(struct node));
    newNode ->data = data;
    newNode ->link = NULL;
    ptr->link = newNode;
    return newNode;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    struct node *ptr = head;
    // ptr=add_at_end(ptr,98);
    ptr=add_at_end(ptr,28);
    ptr=add_at_end(ptr,1);
    ptr=add_at_end(ptr,5);
    ptr=add_at_end(ptr,98);
    ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    
}