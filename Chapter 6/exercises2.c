#include <stdio.h>

int main() {
    int m;
    long long factorial = 1;  

    printf("Enter an integer: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %lld\n", m, factorial);

    return 0;
}
