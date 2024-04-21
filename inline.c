#include <stdio.h>

// Declaration of inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    
    // Call to inline function
    int result = add(x, y);
    
    printf("Result of addition: %d\n", result);
    
    return 0;
}

