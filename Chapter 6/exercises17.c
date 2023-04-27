#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    int i;
    double x, y;
    printf("x\t\t y\n");
    printf("---------------------\n");

    for (i = 0; i <= 12; i++) {
        x = i * 15.0;
        y = sin(x * PI / 180.0);
        printf("%5.1f degrees\t%5.2f\n", x, y);
    }

    return 0;
}
