#include<stdio.h>
int main()
{
    int i=1024,j=1;
    for(;i;i>>=1,j++){
        printf("Hello world %d\n",j);
    }
}