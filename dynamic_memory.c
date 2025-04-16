#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    int *p;

    printf("Enter the number of items in array:\n");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if(p == NULL) {
        printf("Unable to allocate the requested memory!");
        exit(1);
    }

    for(int i = 0; i < n; i++) {
        printf("Enter item %d: ", i+1);
        scanf(" %d", p+i);
    }

    printf("Content of array is: \n");

    for(int j = 0; j < n; j++) {
        printf("%4d", *(p+j));
    }

    free(p);

    return 0;
}