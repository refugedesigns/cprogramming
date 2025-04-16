#include <stdio.h>
#include <stdlib.h>

int ** allocate(int nRows, int nCols) {
    int **p;

    p = (int **)malloc(nRows * sizeof(int **));

    if(p == NULL) {
        printf("Could not allocate memory, exiting...");
        exit(1);
    }

    for(int i = 0; i < nRows; i++) {
        *(p+i) = (int *)malloc(nCols, sizeof(int));
    }

    return p;
}

void inputValues(int **p, int nRows, int nCols) {
    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < nCols; j++) {
            printf("Enter value for row %d col %d : ", i, j);
            scanf("%d",(*(p+i)+j));
        }
    }
}

void printValues(int **p, int nRows, int nCols) {
    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < nCols; j++) {
            printf("%4d", *(*(p+i)+j));
        }
    }
}

void free_memory(int **p, int nRows, int nCols) {
    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < nCols; j++) {
            free(((*p+i)+j));
        }
    }
    free(p);
}

int main() {
    int nRows, nCols;

    printf("Enter the number of rows: \n");
    scanf("%d", &nRows);
    printf("Enter the number of columns: \n");
    scanf("%d", &nCols);
}