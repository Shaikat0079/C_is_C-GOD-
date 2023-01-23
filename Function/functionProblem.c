#include<stdio.h>
int fun(int);
int main()
{
    int number = 435;
    int result = fun(number);
    printf("%d",result);
}
int fun(int num)
{
    int count=0;
    while (num!=0)
    {
        count++;
        num>>=1;
    }

    return count;
    
}