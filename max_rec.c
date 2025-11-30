#include <stdio.h>

int maxArray(int arr[], int n) {
    if(n == 1) return arr[0];
    int max = maxArray(arr, n-1);
    return (max > arr[n-1]) ? max : arr[n-1];
}

int main() {
    int n, arr[50];
    printf("Enter size: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Maximum = %d", maxArray(arr, n));
    return 0;
}