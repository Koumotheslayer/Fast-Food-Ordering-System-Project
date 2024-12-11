>Fast Food Ordering System

This document provides a detailed explanation of the Fast Food Ordering System implemented in C. The program allows users to order food items, apply discounts based on their status (student or senior citizen), and enter a promotion code to unlock a free item. The program calculates the total cost, applies discounts, and includes tax in the final amount.


The program includes the `stdio.h` header file to use standard input and output functions such as `printf` and `scanf`.


The `main` function is the entry point of the program.

- `choice`: Stores the user's menu choice.
- `totalCost`: Stores the total cost of the order.
- `status`: Stores the user's status (student, senior citizen, or others).
- `size`: Stores the size of the food item.
- `ingredient`: Stores the additional ingredient chosen by the user.
- `discount`: Stores the discount percentage based on the user's status.
- `addMoreIngredients`: Stores the user's choice to add more ingredients.
- `promoCode`: Stores the entered promotion code.
- `freeItem`: Stores the user's choice of a free item if the promo code is correct.
- `i`: Loop variable for entering the promo code.
- `correctPromoCode`: Stores the correct promotion code "FREEFOOD".

The program prompts the user to enter their status and applies a discount accordingly:
- 30% discount for students.
- 25% discount for senior citizens.

The program prompts the user to enter the promotion code one letter at a time. It then checks if the entered code matches the correct code "FREEFOOD". If the code is correct, the user can choose a free item.

The program displays a menu and processes the user's order. The user can choose from Pizza, Tacos, or Salad, and specify the size and additional ingredients. The total cost is updated based on the user's choices. If the user has a free item, it is applied to the first chosen item.

The program applies the discount to the total cost and calculates the final cost including a 19% tax. The final amounts are displayed to the user.

This Fast Food Ordering System demonstrates basic concepts of user input, conditional statements, loops, and arithmetic operations in C. It provides a simple yet effective way to manage food orders, apply discounts, and handle promotion codes.




-Ouchetati Abdelkarim
