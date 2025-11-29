#include<stdio.h>
int main()
{
    int n=5,i;
    for(int i=n;i>=1;i--)
    {
        for(int space=1;space<=n-i;space++)
        {
            printf("");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}