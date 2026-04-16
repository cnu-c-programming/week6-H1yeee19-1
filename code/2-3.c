#include <stdio.h>

void print_2d_arr(int* element, int row_size, int col_size) {
    for (int i=0; i<row_size; i++) {
        for (int j=0; j<col_size; j++) {
            printf("%d ", *(element + i*col_size + j)); 
            // Accessing elements in a 2D array using pointer arithmetic
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {1,2,3,4,5,6};
    print_2d_arr(&arr[0][0], 2, 3);
    // Passing the address of the first element of the 2D array
}
