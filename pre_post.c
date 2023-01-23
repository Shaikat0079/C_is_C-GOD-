#include<stdio.h>
int main()
{
    int a = 6;
    int x;
    x = a++;
    printf("%d %d",x,a);
    // x = 6;
    // a = 7;
    int b = 10;
    int y;
    y = ++b;
    printf("\n%d %d",y,b);
    // y = 11
    // b = 11
    return 0;
}