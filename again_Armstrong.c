#include<stdio.h>
int main()
{
    int number,result = 0, count = 0, q;
    printf("Enter a number to check armstrong:");
    scanf("%d",&number);
    q = number;
    while (q!=0)
    {
        count++;
        q = q/10;
    }
    int cnt = count;
    q = number;
    int mul=1;
    int remainder;
    while(q!=0)
    {
        remainder = q%10;
        while (cnt!=0)
        {
            mul = mul * remainder;
            cnt--;
        }
        result = result + mul;
        mul = 1;
        cnt = count;
        q = q /10;
        
    }

    if(result==number){
        printf("\n%d is armstrong number\n",result);
    }
    
}