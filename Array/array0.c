// Array without macros!
#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the input for index %d",i);
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements are as follows:\n");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}