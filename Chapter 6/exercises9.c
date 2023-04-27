#include <stdio.h>
#include <math.h>

int main() {
    double a = 1.0;
    double x, y1, y2;

    for (x = 0.0; x <= 5.0; x += 0.1) {
        y1 = exp(-a * x);
        y2 = exp(-a * x * x / 2);
        printf("%.2f\t %.2f\t %.2f\n", x, y1, y2);
    }

    return 0;
}
