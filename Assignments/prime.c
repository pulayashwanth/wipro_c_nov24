#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;  // Assume the number is prime initially
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Edge cases: numbers less than 2 are not prime
    if (num <= 1) {
        isPrime = 0;  // Numbers <= 1 are not prime
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;  // If divisible, it's not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
