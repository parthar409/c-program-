#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    printf("x\t y\n"); 
    for (x = 0.0; x <= 10.0; x += 0.1) {
        y = exp(-x);
        printf("%.1f\t %.4f\n", x, y); 
    }
    return 0;
}
