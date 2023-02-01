#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *del_LL(struct node *head){
    struct node *temp = head;
    while (temp!=NULL)
    {
        temp=temp->link;
        free(head);
        head = temp;
    }
    return head;
}
int main()
{
struct node *head = malloc(sizeof(struct node));
    head ->data =69;
    head ->link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current ->data = 56;
    current ->link = NULL;
    head->link = current;
    current = malloc(sizeof(struct node));
    current->data = 70;
    current->link = NULL;
    head->link->link = current;
    current = malloc(sizeof(struct node));
    current->data = 96;
    current->link = NULL;
    head->link->link->link = current;
    current = malloc(sizeof(struct node));
    current->data = 22;
    current->link = NULL;
    head->link->link->link->link = current;
    head = del_LL(head);
    if(head==NULL){
        printf("List is NO more!\nRIP LIST\n");
    }
}