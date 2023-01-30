#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void del_last(struct node *head){
    struct node *temp = head;
    if(!head){
        printf("List is empty");
    }
    else if(head->link==NULL){
        free(head);
        head = NULL;
    }
    else{
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 69;
    head->link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current->data = 96;
    current->link = NULL;
    head->link = current;
     current = malloc(sizeof(struct node));
    current->data = 1;
    current->link = NULL;
    head->link->link = current;
    current = malloc(sizeof(struct node));
    current->data = 96;
    current->link = NULL;
    head->link->link->link = current;
    current = malloc(sizeof(struct node));
    current->data = 69;
    current->link = NULL;
    head->link->link->link->link = current;
    struct node *ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    struct node *temp = head;
    del_last(head);
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->link;
    }
    return 0;
}