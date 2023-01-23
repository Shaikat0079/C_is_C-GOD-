#include<stdio.h>
int main()
{
    int number,result = 0;
    printf("Enter a number:");
    scanf("%d",&number);
    int q = number;
    int remainder,i,mul;
    while (q!=0)
    {
        remainder = q%10;
        for(i=1,mul=1;i<=remainder;i++)
        {
            mul = mul*i;
            // printf("\n%d",mul);
        }
        result = result + mul;
        q = q/10;
    }

    if(number==result){
        printf("%d is a strong numver",result);
    }else{
        printf("%d isn't a strong number",number);
    }
    
}