#include<stdio.h>
int main()
{
    int a[10]={0};
    printf("%d",sizeof(a)/sizeof(a[0]));
}