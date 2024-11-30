#include <stdio.h>

// Recursive function to find the smallest element in an array
int findSmallest(int arr[], int n) {
    // Base case: If there's only one element, return that element
    if (n == 1) {
        return arr[0];
    }
    
    // Recursive case: Find the smallest in the rest of the array
    int smallest = findSmallest(arr, n - 1);
    
    // Compare the current element with the smallest from the rest
    if (arr[n - 1] < smallest) {
        return arr[n - 1];
    } else {
        return smallest;
    }
}

int main() {
    int arr[] = {34, 67, 23, 89, 12, 4, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Call the recursive function to find the smallest element
    int smallest = findSmallest(arr, size);
    
    // Print the smallest element
    printf("The smallest element in the array is: %d\n", smallest);
    
    return 0;
}
