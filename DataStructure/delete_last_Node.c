#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *del_last(struct node *head){
    if(!head){
        printf("List is Empty");
        return 0;
    }
    else if (head->link==NULL)
    {
        free(head);
        head == NULL;
    }
    else{
        struct node *temp = head;
        struct node *temp2 = head;
        while (temp->link != NULL)
        {
            temp2=temp;
            temp=temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 22;
    head->link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link=current;
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
    del_last(head);
    struct node *ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    return 0;
}