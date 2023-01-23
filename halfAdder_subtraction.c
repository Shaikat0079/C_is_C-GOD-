#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers to substract:");
    scanf("%d %d",&x,&y);
    while(y!=0)
    {
        int sum = x^y;
        int carry = (~x&y)<<1;
        x = sum;
        y = carry;
    }
    printf("%d\n",x);
    return 0;
}