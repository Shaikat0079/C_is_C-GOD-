// here x>0 and y<0
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    while(y!=0)
    {
        x--;
        y++;
    }
    printf("%d %d",x,y);
}