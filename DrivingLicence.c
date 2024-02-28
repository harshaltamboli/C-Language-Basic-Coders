#include <stdio.h>

int main() {
    int age;

 
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age >= 18) {
        printf("Congratulations! You are eligible for a driving license.\n");
    } else {
        printf("Sorry, you are not eligible for a driving license .\n");
    }

    return 0;
}

