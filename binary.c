#include<stdio.h>
int main()
{
    int num;
    //input:prompt user for a number between 0 and 255
    printf("enter a number between 0 and 255:");
    scanf("%d",&num);
    //validate the input
    if(num<0||num>255){
        printf("invalid input.\n");
        return 1;
    }
    //display binary equivalent
    printf("binary equivalent of %d is:",num);
    for(int i=7;i>=0;i--){
       int bit=(num>>i)&1;
       printf("%d",bit);
    }
    return 0;
}