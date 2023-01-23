#include<stdio.h>
int *findMid(int a[],int n){
    return &a[n/2];
}
int main()
{
    int arr[]={23,4,21,98,987,50,32,10,123,986,50};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d",*findMid(arr,len));

}