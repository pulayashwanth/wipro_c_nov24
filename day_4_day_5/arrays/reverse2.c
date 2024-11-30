#include <stdio.h>
#include <stdlib.h> // for memory allocation

// Function to reverse the array without modifying the original array
float* reverse(float array[], int length) {
    // Allocate memory for the reversed array
    float* reversedArray = (float*)malloc(length * sizeof(float));
    if (reversedArray == NULL) {
        printf("Memory allocation for reversed array failed.\n");
        exit(0);
    }

    // Fill the reversed array
    for (int i = 0; i < length; i++) {
        reversedArray[i] = array[length - 1 - i];
    }

    return reversedArray; // Return the reversed array
}

// Function to print the array
void print_array(float array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

int main() {
    float* array;
    int number;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &number);

    // Allocate memory for the original array
    array = (float*)calloc(number, sizeof(float));
    if (array == NULL) {
        printf("Memory allocation for original array failed.\n");
        exit(0);
    }

    // Input elements into the original array
    for (int i = 0; i < number; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &array[i]);
    }

    // Print the original array
    printf("\nOriginal array: ");
    print_array(array, number);

    // Reverse the array (returns a new reversed array)
    float* reversedArray = reverse(array, number);

    // Print the reversed array
    printf("\nReversed array: ");
    print_array(reversedArray, number);

    // Free allocated memory
    free(array);
    free(reversedArray);

    return 0;
}
