#include<stdio.h>
int main()
{
    int num1,num2,num3;
    //input three numbers
    printf("enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    //finding greatest number
    if(num1>=num2 && num1>=num3){
    printf("greatest number=%d\n",num1);
    }
    else if(num2>=num1 && num2>=num3){
    printf("greatest number=%d\n",num2);
    }
    else{
    printf("greatest number=%d\n",num3);
    }
    //finding smallest number
    if(num1<=num2 && num1<=num3){
    printf("smallest number=%d\n",num1);
    }
    else if(num2<=num1 && num2<=num3){
    printf("smallest number=%d\n",num2);
    }
    else{
    printf("smallest number=%d\n",num3);
    }
    return 0;
}