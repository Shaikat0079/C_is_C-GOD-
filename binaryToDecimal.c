#include<stdio.h>
int main()
{
    int binary;
    printf("Enter a binary number:");
    scanf("%d",&binary);
    int decimal = 0,weight = 1;
    while (binary!=0)
    {
        int rem = binary%10;
        decimal = decimal + weight*rem;
        weight = weight*2;
        binary = binary/10;
    }
    printf("%d",decimal);
    return 0;
}
// this code has some type casting issues!
// #include<math.h>
// int main()
// {
//     int binary;
//     printf("Enter a binary number:");
//     scanf("%d",&binary);
//     double decimal = 0;
//     double count=0;
//     while (binary!=0)
//     {
//         int rem= binary%10;
//         decimal = decimal+pow(2,count)*rem;
//         binary = binary /10;
//         count++;
//         // printf("%lf\n",count);
//     }
//     printf("%.0lf",decimal);
// }