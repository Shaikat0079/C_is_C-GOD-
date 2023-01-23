#include<stdio.h>
int areaOfrect(int l,int b)
{
    return l*b;
}
int main()
{
    int l,b;
    printf("Enter the length, breadth:");
    scanf("%d %d",&l,&b);
    int area = areaOfrect(l,b);
    printf("%d",area);
}