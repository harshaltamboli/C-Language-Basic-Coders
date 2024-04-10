#include <stdio.h>

// Define a union named Number
union Number {
    int intValue;
    float floatValue;
};

int main() {
    
    union Number num;

    
    num.intValue = 10;
    printf("Integer value: %d\n", num.intValue);

    
    num.floatValue = 3.14;
    printf("Float value: %.2f\n", num.floatValue);

   
    printf("Integer value after assigning float: %d\n", num.intValue);

    return 0;
}

