#include<stdio.h>
int main()
{
    int a[] = {11,22,36,5,2};
    int sum = 0, *p,i;
    for(i=0;i<5;i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
    for(p=a;p<=a+4;p++){
        sum += *p;
    }
    printf("%d",sum);
}