#include <stdio.h>

int main() {
  int rows = 15;
  int cols = 18;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i == 0 || i == rows - 1 || i == rows / 2) {
        printf("*");
      } else if ((j == 0 && i < rows / 2) || (j == cols - 1 && i > rows / 2)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
