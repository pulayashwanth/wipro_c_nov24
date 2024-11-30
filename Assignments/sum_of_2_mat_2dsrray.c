#include <stdio.h>

#define MAX 10 // Define maximum size for matrices

// Function to add two matrices
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    // Traverse through the matrices
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j]; // Add corresponding elements
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col;
    
    // Input the number of rows and columns for the matrices
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];

    // Input elements for the first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add matrices
    addMatrices(mat1, mat2, result, row, col);

    // Display the result
    printf("Sum of the matrices is:\n");
    printMatrix(result, row, col);

    return 0;
}
