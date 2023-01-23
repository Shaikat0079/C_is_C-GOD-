#include<stdio.h>
int main()
{
    int a[] = {1,0,0,0,0,2,3,0,0,0};
    int b[10] = {[0]=1,[5]=2,[6]=3};
    int i;
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d ",b[i]);
    }
}