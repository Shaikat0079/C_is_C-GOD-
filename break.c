#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number:\n");
        scanf("%d",&n);
        if(n<0)
            break;
    } while (n!=0);
    
}