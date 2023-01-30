#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *del_at_pos(struct node *head,int pos){
    int count = 0;
    if(!head){
        printf("List is Empty");
        return NULL;
    }
    if(pos==0){
        head = head->link;
        return head;
    }
    struct node *current = head;
    struct node *prev = NULL;
    while (current!=NULL)
    {
        if(count == pos){
            prev->link = current->link;
            free(current);
            return head;
        }
        count++;
        prev = current;
        current = current->link;

    }
            // return head;
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
    // head=del_at_pos(head,3);
    // head=del_at_pos(head,2);
    // head = del_at_pos(head,2);
    // head=del_at_pos(head,0);
    head=del_at_pos(head,0);
    head=del_at_pos(head,3);
    if(head==NULL){
        printf("List is empty");
        return 0;
    }
    struct node *ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    return 0;
}