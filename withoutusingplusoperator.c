#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    while (y!=0)
    {
        x++;
        y--;
    }
    printf("%d",x);
    return 0;
}