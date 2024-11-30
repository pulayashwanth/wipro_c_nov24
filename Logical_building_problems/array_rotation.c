

// 3. Array Rotation :This challenge is about moving numbers around in a list. It's useful for rearranging data. 
// The Problem You have a list of numbers. You need to move the numbers to the right by a certain amount. The user will tell you how many times



#include <stdio.h>

// Function to rotate the array to the right by 'k' positions
void rotateArray(int arr[], int n, int k) {
    // Reduce k to within the range of array size
    k = k % n;
    if (k == 0) return; // No need to rotate if k is 0 or a multiple of n

    int temp[k];

    // Step 1: Store the last 'k' elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift the rest of the array to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Place the stored elements at the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of rotations
    printf("Enter the number of rotations: ");
    scanf("%d", &k);

    // Rotate the array
    rotateArray(arr, n, k);

    // Print the rotated array
    printf("Rotated Array: ");
    printArray(arr, n);

    return 0;
}
