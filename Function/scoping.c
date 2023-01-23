#include<stdio.h>
int a = 5;
int fun1(int);
int fun2(int);
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d",a);
}
int fun1(int b)
{
    b = b+10;
    // b = 20;
    b = fun2(b);
    return b;
}
int fun2(int c)
{   
    c = a+c;
    return c;
}