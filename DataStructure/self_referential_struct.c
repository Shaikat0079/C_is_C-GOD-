#include<stdio.h>
struct me{
    int i;
    char c;
    struct me *ptr;
};
int main()
{
    struct me a;
    struct me b;
    a.i = 10;
    a.c = 'A';
    a.ptr = NULL;
    b.i = 20;
    b.c = 'B';
    b.ptr = NULL;
    a.ptr = &b;
    printf("%d %c",a.ptr->i,a.ptr->c);
}