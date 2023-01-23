#include<stdio.h>
int main()
{
    int number,result = 0;
    printf("Enter a number to check it's armstrong:");
    scanf("%d",&number);
    int count = 0, q = number;
    while (q!=0)
    {
        q = q/10;
        printf("\n%d",q);
        count++;
    }
    // printf("%d",count);
    q = number;
    int cnt = count;
    int remainder,mul = 1;
    while (q!=0)
    {
        remainder = q%10;
        while (cnt!=0)
        {
            mul = mul*remainder;
            cnt--;
        }
        // printf("%d\n",mul);
        result = result + mul;
        cnt = count;
        mul = 1;
        q = q/10;
        
    }

    printf("\n%d",result);
    
}