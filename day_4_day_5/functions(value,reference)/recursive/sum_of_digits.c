#include <stdio.h>

// Function to find the sum of digits of a number using recursion
int sumOfDigits(int n) {
    // Base case: If the number is 0, return 0
    if (n == 0) {
        return 0;
    }
    
    // Recursive case: Add the last digit and recurse with the remaining number
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    
    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the sumOfDigits function and display the result
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    
    return 0;
}
