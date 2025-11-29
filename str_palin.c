#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    int len,i,j;
    printf("enter a string:");
    gets(str);
    len=strlen(str);
    j=len-1;
    for(i=0;i<len;i++;j--){
        rev[i]=str[j];
    }
    rev[i]='\0';
    if(stremp(str,rev)==0)
    printf("it is a palindrome.\n");
    else
    printf("it is not a palindrome.\n");
    return 0;
}