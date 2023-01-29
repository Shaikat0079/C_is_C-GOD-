#include<stdio.h>
struct abc{
    int x;
    int y;
};
int main()
{
    struct abc d={10,20};
    struct abc *ptr = &d;
    printf("%d %d",ptr->x,ptr->y);
}