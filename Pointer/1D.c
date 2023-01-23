#include<stdio.h>
int main()
{
    int a[]={5,3,6,1};
    printf("%p %d\n",a,*a);
    printf("%p %d\n",a+1,*(a+1));
    printf("%p %d\n",a+2,*(a+2));
    printf("%p %d\n",a+3,*(a+3));
}