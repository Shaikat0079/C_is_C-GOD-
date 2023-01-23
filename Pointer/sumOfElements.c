#include<stdio.h>
int sum(int arr[],int len){
    int i;
    int result = 0;
    for(i=0;i<len;i++){
        result += arr[i];
    }
    return result;
}
int main()
{
    int arr[]={23,4,21,98,987,45,32,10,123,986,50};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d",sum(arr,len));
}