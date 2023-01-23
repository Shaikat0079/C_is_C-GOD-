#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX],i,j,k,sum=0;
    int arows,acolumns;
    printf("Enter the number of rows and columns of matrix a:");
    scanf("%d %d",&arows,&acolumns);
    printf("Enter the elements:\n");
    for(i=0;i<arows;i++){
        for(j=0;j<acolumns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int brows,bcolumns;
    printf("Enter the number of rows and columns of matrix b:");
    scanf("%d %d",&brows,&bcolumns);
    printf("Enter the elements:\n");
    for(i=0;i<brows;i++){
        for(j=0;j<bcolumns;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<arows;i++){
        for(j=0;j<bcolumns;j++){
            for(k=0;k<brows;k++){
                sum+=a[i][k]*b[k][j]; 
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<acolumns;i++){
        for(j=0;j<brows;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }

}