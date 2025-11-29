#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the number of rows:");
    scanf("%d",n);
    printf("%d",&n);
    int matrix[105][105];
    printf("enter the elements of the matrix:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;i<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[i][j];
            matrix[i][j]=temp;
        }
    }
    printf("the transposed matrix is:n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("n");
    }
    return 0;
}