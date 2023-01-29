#include<stdio.h>
int main()
{
    char *p;
    p = "Hello world"; 
    printf("%c\n",*p);
    printf("%c\n",*(p+1));
    printf("%c\n",*(p+1+1));
    printf("%c\n",*(p+1+1+1));
    printf("%c\n",*(p+1+1+1+1));
    printf("%s",p);
}