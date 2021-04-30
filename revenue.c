#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("Welcome to \"RAMS\" store");

    float price;
    int quantity;
    printf("\n\tEnter item price: ");
    scanf("%f", &price);

    // Checking for invalid price case
    if (price <= 0) {
        printf("\n\tThis is not a valid item price.");
        printf("\n\tPlease run the program again.");
        
        printf("\n\nThank You for using \"RAMS\" store\n");
        exit (0);
    }

    printf("\tEnter quantity: ");
    scanf("%d", &quantity);

    float cost, discount, discountAmount, total;

    if(quantity >= 1 && quantity <= 49) {
        discount = 0.0;
    } else if (quantity >= 50 && quantity <= 99) {
        discount = 10.0;
    } else if (quantity >= 100 && quantity <= 149) {
        discount = 15.0;
    } else {
        discount = 25.0;
    }

    // Checking for invalid quantity case
    // If pass then successful run
    if (quantity <= 0) {
        printf("\n\tThis is not a valid quantity order.");
        printf("\n\tPlease run the program again.");
        
        printf("\n\nThank You for using \"RAMS\" store\n");
        exit (0);
    } else {
        printf("\n\tThe item price is: $%.1f", price);
        printf("\n\tThe order is: %d item(s)", quantity); 
        
        cost = price * quantity;
        printf("\n\tThe cost is: $%.1f", cost);
        printf("\n\tThe discount is: %.1f%%", discount);
        discountAmount = cost * (discount / 100);
        printf("\n\tThe discount amount is: $%.1f", discountAmount);
        total = cost - discountAmount;
        printf("\n\tThe total is: $%.1f", total);
        
        printf("\n\nThank You for using \"RAMS\" store\n");
        exit (0);
    }

    return 0;
}
