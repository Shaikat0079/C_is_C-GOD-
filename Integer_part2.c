#include<stdio.h>
#include<limits.h>
int main()
{
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("range of signed interger if from:%d to %d",var1,var2);
    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;
    printf("\nrange of signed interger if from:%u to %u",var3,var4);
    short int var5=SHRT_MIN;
    short int var6=SHRT_MAX;
    printf("\nrange of short signed integer is from:%d to %d",var5,var6);
    short unsigned int var7 = 0;
    short unsigned int var8 = USHRT_MAX;
    printf("\nrange of unsigned short integer is from %u to %u",var7,var8);
    return 0;
}