#include<stdio.h>
void c(int *p,int *q){
    *p = *q;
    // *p=2;
}
int i = 0,j=1;
int main()
{
    c(&i,&j);
    printf("%d %d",i,j);
}