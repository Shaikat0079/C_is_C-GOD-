#include<stdio.h>
void print(int *a,int *b)
{
    *a = 40;
    *b = 50;
    printf("%d %d",*a,*b);
}
int main()
{
    int x = 10,y = 20;
    // int *ptrx,*ptry = &y;
    // ptrx = &x;
    print(&x,&y);
}