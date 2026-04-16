#include <stdio.h>

int main() {
    char *names[5] = {"kim", "lee", "park", "choi", "jeong"};

    for (int i=0; i<5; i++) {
        for (int j=0; ; j++) {
            char c = *(*(names+i)+j);
            if (c == '\0') break; // End of string
            printf("%c", c); // Print each character
        } // Print each name
        printf("\n"); // Print a newline after each name
    }
}
