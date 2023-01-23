#include<stdio.h>
int main()
{
    int a[]={12,24,32,21,44,4,10,9,30,15};
    int *p;
    p = &a[2];
    p = p+2;
    printf("%d",*p);
}