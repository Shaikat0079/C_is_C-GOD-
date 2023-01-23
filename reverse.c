#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
    while (n!=0)
    {
        int remainder = n%10;
        sum=remainder+sum*10;
        n=n/10;
    }
    printf("%d",sum);
}