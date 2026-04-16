#include <stdio.h>

int main() {
    int arr[2][3] = {{1,2,3}, {4,5,6}};

    int (*p1)[2][3] = &arr; 
    int (*p2)[3] = &arr[0];   
    int *p3 = &arr[0][0];   

    printf("%p\n", (void*)p1); // Address of the array of pointers to the 2D array
    printf("%p\n", (void*)p2); // Address of the array of pointers to the first row of the 2D array
    printf("%p\n", (void*)p3); // Address of the first element of the 2D array

    printf("\n");
    printf("%lu\n", (unsigned long long)(p1+1) - (unsigned long long)(p1));
    printf("%lu\n", (unsigned long long)(p2+1) - (unsigned long long)(p2));
    printf("%lu\n", (unsigned long long)(p3+1) - (unsigned long long)(p3));

}
