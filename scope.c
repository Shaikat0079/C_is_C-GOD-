#include<stdio.h>
int fun();
int var = 20;
int main()
{
    int var = 55;
    printf("%d",var);
    printf("\n");
    fun();
    return 0;
}
int fun()
{
    printf("%d",var);
}