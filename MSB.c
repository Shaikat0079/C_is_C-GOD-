// finding_out the MSB of a number
// https://codeforwin.org/2016/01/c-program-to-check-most-significant-bit-of-number-is-set-or-not.html
#include<stdio.h>
#define BITS sizeof(int)*8
int main()
{
    int num;
    printf("Enter any number:\n");
    scanf("%d",&num);
    int msb = 1<<(BITS-1);
    if(num&msb){
        printf("MSB of %d is set (1)!",num);
        return 0;
    }
    printf("MSB of %d is unset (0)!",num);
    return 0;
}