// 1. Given an array with numbers, write a program that efficiently answers queries of the form: //“Which is the nearest larger value for the number at position i?”, where distance is the difference in array indices. For example in the array [1,4,3,2,5,7], the nearest larger value for 4 is 5. After linear time preprocessing you should be able to answer queries in constant time.


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 1000

// Function to preprocess nearest larger elements
void preprocessNearestLarger(int arr[], int n, int nearestLargerLeft[], int nearestLargerRight[]) {
    int stack[MAX], top = -1;

    // Initialize arrays with -1 (indicating no larger element found)
    for (int i = 0; i < n; i++) {
        nearestLargerLeft[i] = -1;
        nearestLargerRight[i] = -1;
    }

    // Find nearest larger elements to the right
    for (int i = 0; i < n; i++) {
        while (top >= 0 && arr[stack[top]] <= arr[i]) {
            nearestLargerRight[stack[top--]] = i;
        }
        stack[++top] = i;
    }

    // Reset the stack
    top = -1;

    // Find nearest larger elements to the left
    for (int i = n - 1; i >= 0; i--) {
        while (top >= 0 && arr[stack[top]] <= arr[i]) {
            nearestLargerLeft[stack[top--]] = i;
        }
        stack[++top] = i;
    }
}

// Function to answer queries
int findNearestLarger(int arr[], int nearestLargerLeft[], int nearestLargerRight[], int n, int index) {
    int left = nearestLargerLeft[index];
    int right = nearestLargerRight[index];

    if (left == -1 && right == -1) {
        return -1;  // No larger element found
    }

    if (left == -1) {
        return arr[right];
    }

    if (right == -1) {
        return arr[left];
    }

    // Return the closer larger element
    return (index - left <= right - index) ? arr[left] : arr[right];
}

// Main function
int main() {
    int arr[] = {1, 4, 3, 2, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nearestLargerLeft[MAX], nearestLargerRight[MAX];

    // Preprocess the nearest larger elements
    preprocessNearestLarger(arr, n, nearestLargerLeft, nearestLargerRight);

    // Answer some example queries
    int queries[] = {1, 2, 3};
    int numQueries = sizeof(queries) / sizeof(queries[0]);

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < numQueries; i++) {
        int index = queries[i];
        int result = findNearestLarger(arr, nearestLargerLeft, nearestLargerRight, n, index);
        if (result == -1) {
            printf("Nearest larger value for element at index %d (%d) is: None\n", index, arr[index]);
        } else {
            printf("Nearest larger value for element at index %d (%d) is: %d\n", index, arr[index], result);
        }
    }

    return 0;
}

