#include<stdio.h>
int var = 20;
int fun();
int main()
{
    int var = 55;
    printf("%d\n",var);
    fun();
    return 0;
}
int fun()
{
    int var = 1;
    printf("%d",var);
}