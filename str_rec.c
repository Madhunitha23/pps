#include <stdio.h>
#include <string.h>

void reverse(char str[], int i) {
    if(i < 0) return;
    printf("%c", str[i]);
    reverse(str, i-1);
}

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    reverse(str, strlen(str)-1);
    return 0;
}