#include<stdio.h>
int sum(int arr[]){
    int i;
    int add=0;
    for(i=0;i<5;i++){
        add+=arr[i];
    }
    return add;
}
int main()
{
    // int arr[]={10,20,30,40,50};
    int arr[5],i;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
     printf("%d",sum(arr));
}