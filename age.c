#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",age);
    if(age>0)
    {
        if(age>=5){
            printf("you are eligible for kindergarten");
        }
        else{
            printf("sorry!you are not eligible for kindergarten");
        }
        if(age>5&&age<=10){
            printf("you are eligible for play school");
        }
        else{
            printf("sorry!you are not eligible for play school");
        }
        if(age>10&&age<=15){
            printf("you are eligible for high school");
        }
        else{
            printf("sorry!you are not eligible for high school");
        }
        if(age>=15&&age<=17);{
            printf("you are eligible for intermediate");
        }
        else{
            printf("sorry!you are not eligible for intermediate");
        }
        if(age>=18);{
            printf("you are eligible for voting");
        }
        else{
            printf("sorry!you are not eligible for voting");
        }
    }
    else{
        printf("enter valid age");
    }
    return 0;
}