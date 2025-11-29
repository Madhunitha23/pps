#include<stdio.h>
int main()
{
    int num,rows,i;
    //input number and number of rows
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the number of rows:");
    scanf("%d",&rows);
    //print multiplication table
    printf("\nmultiplication table for %d:\n",num);
    for(i=1;i<=rows;i++){
        printf("%d x %d =%d\n",num,i,num*i);
    }
    return 0;
}