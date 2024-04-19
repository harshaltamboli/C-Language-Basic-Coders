#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer points to the first element of the array

    // Display the original array using pointer arithmetic
    printf("Original Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Increment each element of the array using pointer arithmetic
    printf("Incremented Array: ");
    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 5;
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Decrement each element of the array using pointer arithmetic
    printf("Decremented Array: ");
    for (int i = 0; i < 5; i++) {
        *(ptr + i) -= 5;
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

