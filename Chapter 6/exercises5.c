#include <stdio.h>

int main() {
    int n, prev1 = 1, prev2 = 1, current = 1;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    printf("%d %d ", prev1, prev2); 

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;
        printf("%d ", current);
        prev1 = prev2;
        prev2 = current;
    }

    printf("\n");
    return 0;
}
