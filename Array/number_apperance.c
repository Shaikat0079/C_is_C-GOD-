#include<stdio.h>
int main()
{
    int a=1234;
    int seem[10] ={0};
    int count=0;
    while (a!=0)
    {
        int rem = a%10;
        if(seem[rem]==1){
            printf("There is a duplicate!");
            break;
        }
        seem[rem]=1;
        a = a/10;
        // printf("Else no Duplicate!\n");
    }
    // printf("%d",count);
    if(a>0){
        printf("yes");
    }
    else{
        printf("No");
    }
}