#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    printf("Enter value you want to shift:");
    scanf("%lf",&a);
    printf("\nEnter how many left shift you want:");
    scanf("%lf",&b);
    printf("%.0lf",a*pow(2,b));
}