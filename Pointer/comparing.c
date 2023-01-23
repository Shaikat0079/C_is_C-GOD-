#include<stdio.h>
int main()
{
    int a[]={6,5,4,3,2,1};
    int *p = &a[3];
    int *q = &a[5];
    printf("%d\n",p<=q);
    printf("%d\n",p>=q);
    q = &a[3];
    printf("%d",p==q);
}