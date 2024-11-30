// Show Menu to customer and accept the food-number from the customer and serve him the food.

#include <stdio.h>
int main() {
    int foodNumber = 0;
    puts("Welcome to our Hotel \"THE TASTE\"");
    puts("1:Idly-Vada 2:Dosa 3:Poha 4:Alu-Paratha 5:Roti-Sabji. Your choice please");
    scanf("%d", &foodNumber);
    switch(foodNumber) {
        case 1 : puts("Yummy idli-vada"); break;
        case 2 : puts("Tasty Mysuru Dosa"); break;
        case 3 : puts("Soft Bhopal Poha"); break;
        case 4 : puts("Spicy Punjabi Paratha"); break;
        case 5 : puts("Hot and Sweet Roti-Sabji"); break;
        default: puts("Sorry we dont have the food you wish");
    }
}