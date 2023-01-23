#include<stdio.h>
int main()
{
    int a = 22, b=65;
    a = a^b;
    b = b^a;
    a = a^b;
    printf("a==%d  b==%d",a,b);
}