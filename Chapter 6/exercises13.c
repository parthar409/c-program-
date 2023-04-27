#include <stdio.h>

int main() {
    double e = 1.0, term = 1.0;
    int n = 1;
    
    do {
        term /= n;
        e += term;
        n++;
    } while (term >= 0.00001);
    
    printf("The value of e is: %f", e);
    return 0;
}
