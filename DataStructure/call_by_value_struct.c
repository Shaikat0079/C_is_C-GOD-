#include<stdio.h>
typedef struct point
{
    int x;
    int y;
} point;

point edit(point d){
    d.x = 50;
    d.y = d.y+5;
    // int temp;
    // d.x = temp;
    // d.x = d.y;
    // d.y = temp;
    return d;
}
void print(point d){
    printf("%d %d\n",d.x,d.y);
}
int main()
{
    point z = {30, 23};
    point w = {3,3};
    print(z);
    print(w);
    z=edit(z);
    w=edit(w);
    print(z);
    print(w);
}