#include <stdio.h>

int main() {
    int size = 5; 
    int i, j; 
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == (size/2) && j == (size/2)) {
                printf("O "); 
            } else {
                printf("S "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}
