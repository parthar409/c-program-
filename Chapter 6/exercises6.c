#include <stdio.h>
#include <math.h>

int main() {
    double P, r, V;
    int n;

    printf("Enter the value of P: ");
    scanf("%lf", &P);

    printf("Enter the value of r: ");
    scanf("%lf", &r);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\nYear\tValue of V\n");
    printf("--------------------\n");

    for(int i=1; i<=n; i++) {
        V = P * pow(1+r, i);
        printf("%d\t%.2lf\n", i, V);
    }

    return 0;
}
