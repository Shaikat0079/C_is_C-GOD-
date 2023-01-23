#include<stdio.h>
void minMax(int arr[],int len,int *min,int *max){
    *min=*max = arr[0];
    int i;
    for(i=1;i<len;i++){
        if(arr[i]<*min){
            *min = arr[i];
        }
        if(arr[i]>*max){
            *max = arr[i];
        }
    }
}
int main()
{
    int arr[]={23,4,21,98,987,45,32,10,123,986,50};
    int min,max;
    int len = sizeof(arr)/sizeof(arr[0]);
    minMax(arr,len,&min,&max);
    printf("The Maximum = %d and the minimum = %d\n",max,min);
}