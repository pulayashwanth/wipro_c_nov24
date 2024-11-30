#include <stdio.h>

int main() {
    int foodNumber = 0, foodType = 0, choice = 0;

    puts("Welcome to our Hotel \"THE TASTE\"");
    do {
        // Ask the customer for food type
        puts("Please select a category:\n1: Veg\n2: Non-Veg\nYour choice, please: ");
        scanf("%d", &foodType);

        // Handle Veg or Non-Veg
        switch (foodType) {
            case 1:
                // Veg Menu
                puts("Veg Menu:\n1: Idly-Vada\n2: Dosa\n3: Poha\n4: Alu-Paratha\n5: Roti-Sabji\nYour choice, please:");
                scanf("%d", &foodNumber);
                switch (foodNumber) {
                    case 1: puts("Serving: Yummy Idly-Vada"); break;
                    case 2: puts("Serving: Tasty Mysuru Dosa"); break;
                    case 3: puts("Serving: Soft Bhopal Poha"); break;
                    case 4: puts("Serving: Spicy Punjabi Paratha"); break;
                    case 5: puts("Serving: Hot and Sweet Roti-Sabji"); break;
                    default: puts("Sorry, we don't have the food you selected.");
                }
                break;

            case 2:
                // Non-Veg Menu
                puts("Non-Veg Menu:\n1: Chicken Fry\n2: Mutton Biryani\n3: Fish Curry\nYour choice, please:");
                scanf("%d", &foodNumber);
                switch (foodNumber) {
                    case 1: puts("Serving: Yummy Chicken Fry"); break;
                    case 2: puts("Serving: Tasty Mutton Biryani"); break;
                    case 3: puts("Serving: Spicy Fish Curry"); break;
                    default: puts("Sorry, we don't serve exotic dishes like lizards and snakes!");
                }
                break;

            default:
                puts("Invalid selection. Please select either Veg or Non-Veg.");
        }

        // Ask if the customer wants more food
        puts("Do you wish to have more? Enter 1 for Yes, 2 for No: ");
        scanf("%d", &choice);

    } while (choice == 1);

    puts("Thank you! Namaste, visit again.");
    return 0;
}
