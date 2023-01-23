// finding_out the LSB of a number
// https://codeforwin.org/2016/01/c-program-to-check-lsb-of-number.html
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num & 1){
        printf("LSB of %d is set (1)",num);
        return 0;
    }
        printf("LSB of %d is set (0)",num);
        return 0;
}