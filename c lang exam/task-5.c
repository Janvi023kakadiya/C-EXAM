#include <stdio.h>

int Array(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;  
 
    for (int i = 0; i < size; i++) {
        sum += *ptr;  
        ptr++;       
    }

    return sum;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  
    }

   
    int totalSum = Array(arr, size);


    printf("Sum : %d\n", totalSum);

    return 0;
}
