// C program to illustrate scope of variables

#include<stdio.h>
int a,b;
void print()
{
    printf("%d %d",a,b);
}
int fun1()
{
    int a,c;
    a = 0;
    b = 1;
    c = 2;
    return c;

}
void fun2()
{

    a=3;
    int b=5;
    print();
}
int main()
{
    a = fun1();
    fun2();
}