#include<stdio.h>
int main()
{
    int a[2][2]={
        {1,2},
        {3,4}
    },*p;
    for(p=&a[0][0];p<=&a[1][1];p++){
        printf("%d ",*p);
    }
    printf("\n"); 
    printf("%d\n",**a);
    printf("%d\n",**a+1);
    printf("%d\n",*(*(a+1)));
    printf("%d\n",*(*(a+1)+1));
    
}