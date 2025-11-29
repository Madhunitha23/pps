#include<stdio.h>
#include<string.h>
void insert substring(char mainstr[],char substr[],int pos)
{
    int mainlen = strlen(mainstr);
    int sublen = strlen(substr);
    for(int i = mainlen ; i >= pos ; i--){
        mainstr[i+sublen] = mainstr[i];
    }
    for(int i = 0 ; i < sublen ; i++){
        mainstr[pos+i] = substr[i];
    }
    int main(){
        char mainstr[100] , substr[50];
        int pos;
        puts("enter the main string:");
        gets(mainstr);
        puts("enter the substring to insert:");
        gets(substr);
        puts("enter the position to insert(starting from 0:)");
        scanf("%d" , &pos);
        insert substring(mainstr , substr , pos);
        printf("string after intersection:%s\n",mainstr);
        return 0;
    }
}