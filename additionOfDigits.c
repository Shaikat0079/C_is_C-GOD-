#include<stdio.h>
int main()
{
    int number,result=0;
    printf("Enter a number:");
    scanf("%d",&number);
    int q=number,remainder;
    while (q!=0)
    {       
        remainder = q%10;
        result = remainder+result;
        q = q/10;
    }

    printf("\nAddition of Digits = %d",result);
    
}