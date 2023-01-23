#include<stdio.h>
#define N 5
int main()
{
    int arr[N];
    int brr[N];
    int i;
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        scanf("%d",&(*(brr+i)));
    }
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<N;i++){
        printf("%d ",*(brr+i));
    }
}