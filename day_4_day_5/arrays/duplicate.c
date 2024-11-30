#include <stdio.h>

void removeDuplicates(int *arr, int *size) {
    int i, j = 0;

    // Traverse the array using pointer
    for (i = 0; i < *size; i++) {
        int isDuplicate = 0;

        // Check if the current element is already in the result part of the array
        for (int k = 0; k < j; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = 1;
                break;
            }
        }

        // If it's not a duplicate, move it to the next position in the result part of the array
        if (!isDuplicate) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Update the size of the array
    *size = j;
}

int main() {
    int arr[] = {10, 20, 20, 30, 10, 40, 50, 50};
    int size = 8; // Original size of the array
    int i;

    // Display the original array
    printf("Original Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicates
    removeDuplicates(arr, &size);

    // Display the modified array
    printf("Array after removing duplicates: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
