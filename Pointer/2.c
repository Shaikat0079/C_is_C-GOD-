#include<stdio.h>
int main()
{
    int x = 20;
    int *ptr = &x;
    printf("%d\n",*ptr);
    *ptr = 50;
    printf("%d\n",x);
}