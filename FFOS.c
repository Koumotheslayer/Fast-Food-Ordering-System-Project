#include <stdio.h>

int main() {
    int choice;
    float totalCost = 0.0;
    int status;
    char size;
    char ingredient;
    float discount = 0.0;
    int addMoreIngredients;
    char promoCode[8];
    int freeItem = 0;
    int i;
    char correctPromoCode[8] = {'F', 'R', 'E', 'E', 'F', 'O', 'O', 'D'};

    printf("Welcome to our Fast Food Ordering System :)\n");
    printf("Are you a student or a senior citizen?\n");
    printf("Enter 1 for student, 2 for senior, 0 for others: ");
    scanf("%d", &status);

    if (status == 1) {
        discount = 0.30;
    } else if (status == 2) {
        discount = 0.25;
    }

    printf("Enter promotion code if you have one (enter each letter individually):\n");
    for (i = 0; i < 8; i++) {
        scanf(" %c", &promoCode[i]);
    }

    int promoCodeCorrect = 1;
    for (i = 0; i < 8; i++) {
        if (promoCode[i] != correctPromoCode[i]) {
            promoCodeCorrect = 0;
            break;
        }
    }

    if (promoCodeCorrect) {
        printf("Congratulations! You've entered the correct promo code and unlocked a free item!\n");
        printf("Choose your free item:\n");
        printf("1. Pizza\n");
        printf("2. Tacos\n");
        printf("3. Salad\n");
        printf("Please enter your choice: ");
        scanf("%d", &freeItem);
    } else {
        printf("Sorry, the promo code you entered is incorrect.\n");
    }

    do {
        printf("Menu:\n");
        printf("1. Pizza (800 DZD)\n");
        printf("2. Tacos (500 DZD)\n");
        printf("3. Salad (600 DZD)\n");
        printf("4. Checkout\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You chose Pizza\n");
                printf("Choose size (M for Medium, L for Large, XL for Extra Large): ");
                scanf(" %c", &size);
                printf("You chose size %c\n", size);
                do {
                    printf("Choose ingredient (C for Cheese, B for Beef, T for Tuna, N for None): ");
                    scanf(" %c", &ingredient);
                    if (ingredient != 'N') {
                        printf("You chose ingredient %c\n", ingredient);
                    }
                    printf("Do you want to add more ingredients? (1 for Yes, 0 for No): ");
                    scanf("%d", &addMoreIngredients);
                } while (addMoreIngredients == 1);
                if (!freeItem) {
                    totalCost += 800.0;
                } else {
                    freeItem = 0;
                }
                break;
            case 2:
                printf("You chose Tacos\n");
                printf("Choose size (M for Medium, L for Large, XL for Extra Large): ");
                scanf(" %c", &size);
                printf("You chose size %c\n", size);
                do {
                    printf("Choose ingredient (C for Cheese, B for Beef, T for Tuna, N for None): ");
                    scanf(" %c", &ingredient);
                    if (ingredient != 'N') {
                        printf("You chose ingredient %c\n", ingredient);
                    }
                    printf("Do you want to add more ingredients? (1 for Yes, 0 for No): ");
                    scanf("%d", &addMoreIngredients);
                } while (addMoreIngredients == 1);
                if (!freeItem) {
                    totalCost += 500.0;
                } else {
                    freeItem = 0;
                }
                break;
            case 3:
                printf("You chose Salad\n");
                printf("Choose size (M for Medium, L for Large, XL for Extra Large): ");
                scanf(" %c", &size);
                printf("You chose size %c\n", size);
                do {
                    printf("Choose ingredient (C for Cheese, B for Beef, T for Tuna, N for None): ");
                    scanf(" %c", &ingredient);
                    if (ingredient != 'N') {
                        printf("You chose ingredient %c\n", ingredient);
                    }
                    printf("Do you want to add more ingredients? (1 for Yes, 0 for No): ");
                    scanf("%d", &addMoreIngredients);
                } while (addMoreIngredients == 1);
                if (!freeItem) {
                    totalCost += 600.0;
                } else {
                    freeItem = 0;
                }
                break;
            case 4:
                printf("Checking out...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    totalCost -= totalCost * discount;
    printf("Total cost after discount: %f DZD\n", totalCost);
    printf("Total cost with (tax 19 percent): %f DZD\n", totalCost * 1.19);
}
//-Ouchetati Abdelkarim.