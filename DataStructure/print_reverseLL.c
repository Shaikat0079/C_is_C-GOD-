#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void print_reverse(struct node *head){
    if(head==NULL){
        return;
    }
    print_reverse(head->link);
    printf("%d ",head->data);
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
    print_reverse(head);
}