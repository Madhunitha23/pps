#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,r2,c2,i,j,k;
    printf("enter the number of rows and columns of the first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("enter the number of rows and columns of the second matrix:");
    scanf("%d %d",&r2,&c2);
     //check if multiplication is possible
    if(c1!=c2)
    {
        printf("multiplication is not possible!\n");
        return 0;
    }
    //input first matrix
    printf("enter elements of first matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //input second matrix
    printf("enter elements of second matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //matrix multiplication
    printf("product of the two matrices:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<c1;k++){
                c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
            }
        }
    }
    //print result
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&c[i][j]);
        }
        printf("\n");
    }
    return 0;

}