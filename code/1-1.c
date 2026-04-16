#include <stdio.h>

int main() {
    int target_array[2][5] = {{1,2,3,4,5}, {6,7,8,9,10}};
    int (*array_pointer)[5] = target_array; // Pointer to an array of 5 integers
    int a=10, b=20, c=30, d=40, e=50;
    int *pointer_array[5] = {&a, &b, &c, &d, &e}; // Array of pointers to integers

    printf("sizeof(array_pointer): %zu\n", sizeof(array_pointer)); // Size of the pointer to an array
    printf("sizeof(pointer_array): %zu\n", sizeof(pointer_array)); // Size of the array of pointers
    printf("\n");

    for(int i=0; i<4; i++) {
        printf("%p\n", (void*)(array_pointer+i)); // Address of each row in the 2D array
    }
    printf("\n");
    for (int i=0; i<4; i++) {
        printf("%p\n", (void*)(pointer_array+i)); // Address of each pointer in the array of pointers
    }
}
