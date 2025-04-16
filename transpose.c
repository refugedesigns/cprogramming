#include <stdio.h>


int main() {
    printf("Enter the number of rows for the matrix(>=3 and <=10): ");
    int rows;
    scanf("%d", &rows);

    if (rows < 3 || rows > 10) {
        printf("Invalid input. Please enter a number between 3 and 10.\n");
        return 1;
    }

    printf("Enter the number of columns for the matrix(>=3 and <=10): ");
    int cols;
    scanf("%d", &cols);

    if (cols < 3 || cols > 10) {
        printf("Invalid input. Please enter a number between 3 and 10.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Matrix[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    int transpose[cols][rows];

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("\nTranspose Matrix:\n");

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%4d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}