#include<stdio.h>
int add(int *b,int len){
    int i,sum=0;
    for(i=0;i<len;i++){
        sum +=*(b+i);
    }
    return sum;
}
int main()
{
    int a[]={1,2,3,4};
    int len = sizeof(a)/sizeof(a[3]);
    printf("%d",add(a,len));
}