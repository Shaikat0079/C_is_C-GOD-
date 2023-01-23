#include<stdio.h>
int main()
{
    int a = 6;
    printf("%d",a++);//a == 6
    printf("\n%d",++a);//a == 8
    printf("\n%d",a++);//a == 8
    printf("\n%d",a);//a == 9;
    int b = 1;
    printf("\n%d",b--);//b==1
    printf("\n%d",b);
    return 0;
}