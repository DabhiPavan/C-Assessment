#include <stdio.h>

int main() {
    int choice, quantity, total = 0;
    char moreOrders;

    do {
        // Display menu
        printf("---------- Menu --------\n");
        printf("1. Pizza       price = 180rs/pcs\n");
        printf("2. Burger      price = 100rs/pcs\n");
        printf("3. Dosa        price = 120rs/pcs\n");
        printf("4. Idli        price =  50rs/pcs\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        // Switch case for handling the selected item
        switch(choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("\nEnter the quantity: ");
                scanf("%d", &quantity);
                total += 180 * quantity;
                printf("Amount: %d\n", 180 * quantity);
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total += 100 * quantity;
                printf("Amount: %d\n", 100 * quantity);
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total += 120 * quantity;
                printf("Amount: %d\n", 120 * quantity);
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total += 50 * quantity;
                printf("Amount: %d\n", 50 * quantity);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

        // Ask if user wants to order more
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders);
    } while (moreOrders == 'y' || moreOrders == 'Y');

    // Display the total amount
    printf("Total Amount is = %d\n", total);

    return 0;
}

