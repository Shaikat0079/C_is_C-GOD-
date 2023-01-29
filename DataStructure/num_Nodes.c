#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int i;
    struct node *link;
}node;
void count_of_nodes(node* p){
    int count=0;
    if(p==NULL){
        printf("Linked list is EMPTY");
    }
    node* ptr = NULL;;
    ptr = p;
    while (ptr!=NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d Nodes\n",count);
}
int main()
{
    node *head = malloc(sizeof(node));
    head->i = 98;
    head->link = NULL;
    node *current = malloc(sizeof(node));
    current->i = 45;
    current->link = NULL;
    head->link = current;
    current = malloc(sizeof(node));
    current->i = 9;
    current->link = NULL;
    head->link->link = current;
    count_of_nodes(head);
}