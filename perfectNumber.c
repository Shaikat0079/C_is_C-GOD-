#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i,rem,sum=0;
    for(i=1;i<n;i++){
        rem = n%i;
        if(rem==0){
            sum = sum+i;
        }
    }
    if(sum==n){
        printf("Perfect Number!");
    }else{
        printf("Not perfect Number!");
    }
}