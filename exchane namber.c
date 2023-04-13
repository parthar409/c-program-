#include <stdio.h>

int main() {
    int x, y, z, temp;
    printf("Enter the values of x, y, and z: ");
    scanf("%d %d %d", &x, &y, &z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("Rotated values: x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}