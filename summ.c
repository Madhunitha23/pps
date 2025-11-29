#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;  //get last digit
        sum=sum+rem;  //add digit to sum
        n=n/10;  //remove last digit
    }
    printf("sum of digits=%d",sum);
    return 0;
}