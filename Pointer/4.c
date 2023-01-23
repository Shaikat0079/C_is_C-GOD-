#include<stdio.h>
int main()
{
    int i = 10;
    int *p;
    p = &i;
    int *q = &i;
    printf("Address=%p\n",p);
    printf("Address=%p\n",&i);
    printf("Address but with q=%p\n",q);
    printf("value with q %d\n",*q);
    printf("value with p %d",*p);
}