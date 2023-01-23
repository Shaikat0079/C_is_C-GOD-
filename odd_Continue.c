#include<stdio.h>
int main()
{
    int i,n = 2;
    for(i=1;i<=20;i++){
        if(i==n){
            n = n+2;
            printf("n == %d\n",n);
            continue;
        }
        printf("i == %d\n",i);
    }
}