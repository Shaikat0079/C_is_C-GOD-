#include<stdio.h>
int main()
{
    int a=0,b=1;
    int n,i=1,result;
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d ",a);
        result = a + b;
        a = b;
        b = result;
        i++;
    }
    return 0;
}