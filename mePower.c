// I have done it on my own without help of neso!
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>0)
    {

        int result=1;
        while(b!=0)
        {
            result = a*result;
            b--;
        }

        printf("%d",result);
    }else{
  
    double result=1;
    while(b!=0)
    {
        result = (1.0/a)*result;
        b++;
    }

    printf("%lf",result);
    }
}