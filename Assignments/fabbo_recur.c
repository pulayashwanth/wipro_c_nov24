#include <stdio.h>

// Recursive function to print the Fibonacci series
void fibonacci(int n, int first, int second) {
    // Base case: if n is 1, print the first term
    if (n == 1) {
        printf("%d ", first);
        return;
    }
    
    // Print the first term, then recursively print the next terms
    printf("%d ", first);
    
    // Call the function for the next term
    fibonacci(n - 1, second, first + second);
}

int main() {
    int N;
    
    // Input the number of terms to print
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &N);
    
    // First two terms are 1 and 2, so we start the recursion with them
    fibonacci(N, 1, 2);
    
    return 0;
}
