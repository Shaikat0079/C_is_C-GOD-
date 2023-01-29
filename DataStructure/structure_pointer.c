#include<stdio.h>
typedef struct point{
    int x;
    int y;
}point;

void print(struct point *p)
{
    printf("%d %d\n",p->x,p->y);
}
int main()
{
   point p1 = {50,25};
   point p2 = {66,22};
   print(&p1);
   print(&p2);
}