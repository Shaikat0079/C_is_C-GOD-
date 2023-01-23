#include<stdio.h>
int main()
{
    int arr2D[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int i,j,sum=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum+=arr2D[i][j];
        }
    printf("Sum of rows:%d\n",sum);
    sum=0;
    }
    for(j=0;j<3;j++){
        for(i=0;i<2;i++){
            sum = sum+arr2D[i][j];
        }
    printf("Sum of Columns:%d\n",sum);
    sum=0;
    }
}