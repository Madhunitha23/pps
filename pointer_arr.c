//write a program for reading elements using a pointer into an array and display the values using the array.
#include<stdio.h>
int main(){
    int arr[100],n,i;
    int *ptr;
    printf("enter number of elements: ");
    scanf("%d",&n);
    ptr = arr; //pointer points to the beginning of the array
    //reading elements using pointer
    printf("enter %d elements :\n",n);
    for(i =0; i < n; i++){
        scanf("%d", (ptr + i));//reading using pointer arithmetic
    }
    //displaying elements using array notation
    printf("\narray elements are:\n");
    for (i = 0; i < n; i++){
        printf("%d", arr[i]); //displaying using array
    }
    return 0;
}