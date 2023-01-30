#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void add_end(struct node *head,int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;
    struct node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = newNode;
}
struct node *delete_first(struct node *head){
    struct node *ptr;
    ptr = head;
    if(ptr->link == NULL)
        {
        printf("List is already Empty\n");
        return 0;
        }
    else{
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head -> data = 55;
    head -> link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current ->data = 2;
    current ->link = NULL;
    head->link = current;
    current = malloc(sizeof(struct node));
    current->data = 1000;
    current->link = NULL;
    struct node *ptr;
    head->link->link = current;
    add_end(head,342);
    add_end(head,123);
    head=delete_first(head);
    head=delete_first(head);
    head=delete_first(head);
    head=delete_first(head);
    // head=delete_first(head);
    ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

