#include<stdio.h>
#include<stdlib.h>
typedef struct point{
    int x;
    int y;
}point;
point* fun(int a,int b){
    point* ptr =(point*) malloc(sizeof(point));
    ptr->x = a;
    ptr->y = b+5;
    // int temp;
    // temp = a;
    // ptr->x = b;
    // ptr->y = temp;
    return ptr;
}
void print(point *p)
{
    printf("%d %d\n",p->x,p->y);
}
int main()
{
    point *z = fun(30,23);
    point *w = fun(5,10);
    print(z);
    print(w);
    free(z);
    free(w);
}