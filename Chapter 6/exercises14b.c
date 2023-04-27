#include <stdio.h>
#include <math.h>

double cosine(double x, double accuracy) {
    double term = 1.0;
    double sum = 1.0;
    int n = 1;
    while (fabs(term/sum) >= accuracy) {
        term *= -1.0 * x * x / ((2*n-1)*(2*n));
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    double x = 1.0; 
    double accuracy = 0.0001; 
    double result = cosine(x, accuracy);
    printf("cos(%.2f) = %.6f\n", x, result);
    return 0;
}
