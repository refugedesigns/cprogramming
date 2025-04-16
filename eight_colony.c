#include <stdio.h>

#define SIZE 8 

void print_cells(int arr[], int size) {
    printf("[ ");
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if(i < size - 1) {
            printf(" | ");
        }
    }
    printf(" ]\n");
}

int eight_colony_cell(int arr[], int days) {
    int temp[SIZE];
    int left, right;
    int i = 0;
    
    while(i < days) {
        for(int j = 0; j < SIZE; j++) {
            // Handle edge cases
            if(j == 0) {
                left = 0;
                right = arr[j+1];
            } else if(j == SIZE-1) {
                left = arr[j-1];
                right = 0;
            } else {
                left = arr[j-1];
                right = arr[j+1];
            }
            
            // Update cell based on neighbors
            temp[j] = (left == right) ? 0 : 1;
        }

        // Copy temp back to arr
        for(int k = 0; k < SIZE; k++) {
            arr[k] = temp[k];
        }

        printf("Status of colony on day %d\n", i+1);
        print_cells(arr, SIZE);
        i++;
    }
    return 0;
}

int main() {
    int cells[] = {1,0,1,1,0,0,1,0};
    eight_colony_cell(cells, 4);
    return 0;
}