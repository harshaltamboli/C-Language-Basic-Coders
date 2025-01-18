#include <stdio.h>

int main() {
    int numberOfItems; 
    float pricePerItem; 
    float totalCost; 


    printf("Enter the number of items: ");
    scanf("%d", &numberOfItems);


    printf("Enter the price per item: ");
    scanf("%f", &pricePerItem);


    totalCost = numberOfItems * pricePerItem;


    printf("Total cost: %.2f\n", totalCost);

    return 0;
}
