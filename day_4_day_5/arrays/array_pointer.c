#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare an array with 5 elements
    
    // Print the array elements using the array name
    printf("Address of arr: %p\n", arr);       // Address of the first element (arr == &arr[0])
    printf("Address of arr[0]: %p\n", &arr[0]); // Same address as arr
    printf("Value of arr[0]: %d\n", arr[0]); // Value at arr[0]
    printf("Value at arr[0]: %d\n", *(arr));  // Same as arr[0]s

    // Accessing next elements using pointer arithmetic
    printf("Value of arr[1]: %d\n", *(arr + 1)); // *(arr + 1) gives the value of the next element (arr[1])
    printf("Value of arr[2]: %d\n", *(arr + 2)); // *(arr + 2) gives the value of the next element (arr[2])

    // You can also use pointer notation to access elements in a loop
    for (int i = 0; i < 5; i++) {
        printf("Value of arr[%d]: %d\n", i, *(arr + i));
    }

    return 0;
}
