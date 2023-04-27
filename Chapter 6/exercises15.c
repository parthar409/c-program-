#include <stdio.h>
#include <math.h>

int main() {
    double c, d, p, n;

    printf("Enter original cost: ");
    scanf("%lf", &c);
    printf("Enter depreciation rate (as decimal): ");
    scanf("%lf", &d);
    printf("Enter scrap value: ");
    scanf("%lf", &p);

    n = log(p/c) / log(1 - d);

    printf("The useful life of the item is %.2lf years\n", n);

    return 0;
}
