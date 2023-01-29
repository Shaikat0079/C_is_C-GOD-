#include<stdio.h>
void input(char str[])
{
    int ch,i=0;
    while ((ch=getchar())!='\n')
    {
        str[i++]=ch;
    }
    str[i]='\0';
    // return *str;
}
int main()
{
    char str[100];
    // printf("%s",in);
    input(str);
    printf("%s",str);
}