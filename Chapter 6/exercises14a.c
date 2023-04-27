#include <stdio.h>
#include <math.h>

double sine(double x, double accuracy) {
    double term = x;
    double sum = x;
    int n = 1;
    while (fabs(term/sum) >= accuracy) {
        term *= -1.0 * x * x / ((2*n)*(2*n+1));
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    double x = 1.0; 
    double accuracy = 0.0001; 
    double result = sine(x, accuracy);
    printf("sin(%.2f) = %.6f\n", x, result);
    return 0;
}
