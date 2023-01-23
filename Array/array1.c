// Array with Macros
// Because of Macros by changing the value of N, it easy to
//  change the every value of n in whole program
#include<stdio.h>
#define N 10
int main()
{
    int num,i;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }

    /* Write the logic to reverse the array. */

    for(i = num-1; i <=0; i--)
        {
            printf("%d ", arr[i]);
        }
    return 0;
}
