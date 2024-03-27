#include <stdio.h>

int main() {
    int count = 1;

    // Loop runs as long as count is less than or equal to 5
    while (count <= 5) {
        printf("Count: %d\n", count);
        count++;  // Increment count by 1
    }

    printf("Loop finished!\n");

    return 0;
}

