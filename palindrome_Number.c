#include<stdio.h>
int main()
{
    int number,result = 0;
    printf("Enter a number:");
    scanf("%d",&number);
    int q = number;
    while (q!=0)
    {
        int remainder = q%10;
        result = result*10 + remainder;
        q = q/10;
    }

    if(result == number){
        printf("\n %d is palindrome", number);
    }
    else{
        printf("\n%3s","*");
        printf("\n%3s","*");
        printf("\n%3s","*");
        printf("\n*****");
        printf("\n*****");
    }
    
}