#include<stdio.h>
int fun()
{
    static int num = 16;
    return num--;
}
int main()
{
    fun();
    while (fun())
    {
        printf("%d ",fun());
        fun();
    }
    
}