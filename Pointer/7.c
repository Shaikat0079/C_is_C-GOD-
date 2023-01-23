#include<stdio.h>
void c(int *p,int *q){
    int *temp;
    temp = p;
    p = q;
    *p=2;
    *q = 10;
    *temp = 20;

}
int i = 0,j=1;
int main()
{
    c(&i,&j);
    printf("%d %d",i,j);
}