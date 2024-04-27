#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "Hello";
    char str2[20] = "World";
    char str3[20];

    // strlen()
    printf("Length of str1: %d\n", strlen(str1));

    // strcpy()
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // strcat()
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // strchr()
    char *ptr = strchr(str1, 'o');
    printf("Character 'o' found at position: %ld\n", ptr - str1 + 1);

    // strstr()
    char *subStr = strstr(str1, "World");
    if (subStr != NULL) {
        printf("Sub string found at position: %ld\n", subStr - str1 + 1);
    } else {
        printf("Sub string not found.\n");
    }

    return 0;
}

