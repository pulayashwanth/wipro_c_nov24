// 3. Find Nth term of the series: 1 2 2 3 3 5 5 7 8 11 13 13


#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;  // Not a prime number if divisible by any i
    }
    return 1;  // Prime number
}

int main() {
    int N, primeCount = 0, currentNum = 2, prevPrime = 0, prime;

    // Input the position (Nth term) of the series to find
    printf("Enter N to find the Nth term of the series: ");
    scanf("%d", &N);

    // Edge case check
    if (N < 1) {
        printf("Invalid input. Please enter a valid positive integer N.\n");
        return 1;
    }

    // Find the Nth term
    for (int i = 1; i <= N; i++) {
        // Find next prime number
        while (!isPrime(currentNum)) {
            currentNum++;
        }
        
        prime = currentNum;  // Set current number as the prime
        currentNum++;  // Increment to find next prime
        
        // For odd positions, return the prime number
        if (i % 2 != 0) {
            prevPrime = prime;  // Store the prime number
        } else {
            // For even positions, repeat the previous prime
            prevPrime = prevPrime;
        }
    }

    // Output the result: Nth term of the series
    printf("The %dth term of the series is: %d\n", N, prevPrime);

    return 0;
}
