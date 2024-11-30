#include <stdio.h>

#define MAX 10  // Maximum size of the matrix

// Function to calculate the transpose of a matrix
void transposeMatrix(int matrix[MAX][MAX], int transpose[MAX][MAX], int rows, int cols) {
    // Loop through rows and columns to swap elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX][MAX], transpose[MAX][MAX];
    int rows, cols;
    
    // Input the number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the transpose of the matrix
    transposeMatrix(matrix, transpose, rows, cols);
    
    // Output the transposed matrix
    printf("The transpose of the matrix is:\n");
    printMatrix(transpose, cols, rows);  // Print with swapped rows and columns
    
    return 0;
}
