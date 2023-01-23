#include<stdio.h>
int main()
{
    int a[] = {5,16,7,89,45,32,23,10};
    int *p = &a[0];
    printf("%d\n",*p);//->5
    printf("%d\n",*(++p));//->16
    printf("%d\n",*(p++));//->16
    printf("%d\n",*p);//->7
}