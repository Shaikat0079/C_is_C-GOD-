#include<stdio.h>
int swap(int *,int *);
int main()
{
    int x = 10,y=20;
    printf("x==%d and y==%d\n",x,y);
    swap(&x,&y);
    printf("x==%d and y==%d\n",x,y);
}
int swap(int *ptr1,int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}