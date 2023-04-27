#include <stdio.h>

int main() {
    int n, first = 1, second = 1, next;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf("Fibonacci sequence: ");
    printf("%d %d ", first, second);
    
    do {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
        n--;
    } while (n > 2);
    
    return 0;
}
