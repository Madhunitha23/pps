#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter the number of rows and columns of the matrices:");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("enter the elements of the first matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of the second matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of the two matrices:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&c[i][j]);
        }
        printf("\n");
    }
    return 0;
}