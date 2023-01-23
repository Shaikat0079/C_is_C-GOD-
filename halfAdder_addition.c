#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers to add:");
    scanf("%d %d",&a,&b);
    while (b!=0)
    {
        int sum = a^b;
        int carry = (a&b)<<1;
        a = sum;
        b = carry;
    }

    printf("%d",a);
    
}