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
    int M, N;

    // Input the range M and N
    printf("Enter M and N (M < N): ");
    scanf("%d %d", &M, &N);

    // Check if M < N and proceed with prime numbers in decreasing order
    if (M >= N) {
        printf("Invalid input. Please ensure M < N.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d in decreasing order are:\n", M, N);

    // Loop from N to M in decreasing order and check for primes
    for (int i = N; i > M; i--) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");  // New line after printing all prime numbers

    return 0;
}
