#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    int i, j;
    // Read input matrices
    printf("Enter the number of rows and columns for matrix1: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the elements of matrix1: ");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the number of rows and columns for matrix2: ");
    scanf("%d %d", &rows2, &cols2);
    printf("Enter the elements of matrix2: ");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Check if matrices can be added
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added.\n");
        return 1;
    }
    // Add matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Print result matrix
    printf("Result of addition: \n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}