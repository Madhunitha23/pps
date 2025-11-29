#include<stdio.h>
int main()
{
    int n,t,r,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;  //get last digit
        s=s+(r*r*r); //add cube of digit
        n=n/10;   //remove last digit
    }
    if(s==t)
    printf("%d is an amstrong number.",t);
    else
    printf("%d is not an amstrong number.",t);
    return 0;
}