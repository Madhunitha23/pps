//write a c program to count the lines,words and characters in a given text
#include<stdio.h>
#include<string.h>
int main()
{
    char line[200];
    int chars=0,words=0,lines=0;
    printf("enter text(press enter on an empty line to stop):\n");
    while(gets(line)!=NULL && strlen(line)!=0){
        lines++; //count the line
        int i=0;
        //count characters and words
        while(line[i]!='\0')
        {
            chars++;
            //word begins when a non-space follows a space or at starting
            if((i==0 && line[i]!=' ' && line[i]!='\t')||
               (line[i]!=' ' && line[i] !='\t' &&
                (line[i-1]== ' ' || line[i-1]=='\t')))
            {
                words++;
            }
            i++;        
        }
    }
    printf("\ncharacters:%d\n",chars);
    printf("words:%d\n",words);
    printf("lines:%d\n",lines);
    return 0;
}