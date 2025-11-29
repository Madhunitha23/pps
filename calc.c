#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\n choose an operation:\n");
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("result=%d\n",a+b);
        break;
        case 2:
        printf("result=%d\n",a-b);
        break;
        case 3:
        printf("result=%d\n",a*b);
        break;
        case 4:
         if(b!=0){
            printf("result=%d\n",a/b);
         }
         else{
            printf("error!division by zero is not allowed\n");
         }
         break;
         default:
         printf("invalid choice!\n");
    }
    return 0;
}