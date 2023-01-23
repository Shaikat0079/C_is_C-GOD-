#include<stdio.h>
int main()
{
    int i = 10;
    int *p,*q;
    p = &i;
    q = p;
    printf("p==%d\n",p);
    printf("q ==  %d\n",q);
    printf("p==%d\n",*p);
    printf("q ==  %d\n",*q);
}