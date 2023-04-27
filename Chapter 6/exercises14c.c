#include <stdio.h>
#include <math.h>

int main() {
    double sum = 1.0;
    double term = 0.0;
    int i = 2;
    do {
        term = pow(1.0/i, i);
        sum += term;
        i++;
    } while (term >= 0.000001*sum);
    printf("The sum is %f", sum);
    return 0;
}
