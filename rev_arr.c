//write a program for display values reverse order from an array using 
#include<stdio.h>
int main(){
    int arr[100], n, i;
    int *ptr;
    printf("enter number of elements: ");
    scanf("%d", &n);
    //read array elements
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //pointer points to the last element of the array
    ptr = &arr[ n - 1];
    //display elements in reverse using pointer
    printf("\narray elements in reverse order:\n");
    for(i = n - 1; i >= 0;i--){
        printf("%d", *ptr);
        ptr--; //move pointer backward
    }
    return 0;
}