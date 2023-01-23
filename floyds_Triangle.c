#include<stdio.h>
int main()
{
    int number,n=1,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
        }

        printf("\n");
    }

    return 0;
}