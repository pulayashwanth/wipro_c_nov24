#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[]) {
    if (argCount != 2) {
        printf("Usage: %s <number>\n", args[0]);
        return 1;
    }

    int inputNumber = atoi(args[1]);
    int sumOfOddPlacedEvenDigits = 0;
    int position = 1; // Position of the digit (1 for the least significant digit)
    int remainderDigit;

    printf("User given number is %d \n", inputNumber);

    while (inputNumber != 0) {
        remainderDigit = inputNumber % 10; // Extract the last digit
        inputNumber /= 10;                // Remove the last digit

        // Check if the position is odd and the digit is even
        if (position % 2 != 0 && remainderDigit % 2 == 0) {
            sumOfOddPlacedEvenDigits += remainderDigit;
        }

        position++; // Move to the next position
    }

    printf("Sum of Odd placed Even digits is %d\n", sumOfOddPlacedEvenDigits);

    return 0;
}
