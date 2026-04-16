#include <stdio.h>

void print_2d_arr(int* rows[], int row_size, int col_size) {
    for (int i=0; i<row_size; i++) {
        for (int j=0; j<col_size; j++) {
            printf("%d ", rows[i][j]); // Accessing elements using pointer arithmetic
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {1,2,3,4,5,6};  // 배열 임의로 분리해 생성
    int* rows[2] = {arr[0], arr[1]}; // Create an array of pointers to the rows

    print_2d_arr(rows, 2, 3); // Passing the 2D array as an array of pointers
}
