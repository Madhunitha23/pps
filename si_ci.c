#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time,si,ci,amount;
    int choice;
    printf("interest calculator\n");
    printf("1.simple interest\n");
    printf("2.compound interest\n");
    printf("enter your choice(1 or 2):");
    scanf("%d",&choice);
    //get common inputs
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate of interest:");
    scanf("%f",&rate);
    printf("enter time(in years):");
    scanf("%f",&time);
    //perform based on choice
    if(choice==1)
    {
        //simple interest
        si=(principal*rate*time)/100;
        printf("\nsimple interest\n");
        printf("simple interest=%2f\n",si);
   
        //compound interest
        amount=principal*pow((1+rate/100),time);
        ci=amount-principal;
        printf("\ncompound interest\n");
        printf("compound interest=%2f\n",ci);
        printf("total amount=%2f\n",amount);
    }    
        else{
            printf("\n invalid choice/please enter 1 or 2\n");
        }
        return 0;
}