#include<stdio.h>
void fun(int, int);
int main()
{
    int x = 20, y = 10;
    fun(x,y);
    printf("x = %d and y = %d",x,y);
    return 0;
}

void fun(int a,int b)
{
    a = 10,b=20;
}