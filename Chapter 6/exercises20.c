#include <stdio.h>

int main() {
    int sum = 0, count = 0, value;
    for (int i = 1; i <= 10; i++) {
        printf("Enter an integer: ");
        scanf("%d", &value);
        if (value > 0) {
            sum += value;
            count++;
        }
        if (sum > 999) {
            break;
        }
    }
    printf("Sum of positive values: %d\n", sum);
    printf("Number of positive values added: %d\n", count);
    return 0;
}
