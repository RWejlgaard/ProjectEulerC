#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  long int x = 0;
  long int y = 0;

  for (long int z = 1; z < 101; z++) {
    x = x += z * z;
  }
  for (long int z = 1; z < 101; z++) {
    y += z;
  }

  y = y * y;
  printf("X: %d\n", x);
  printf("Y: %d\n", y);
  printf("Dif: %d\n", y - x);

  return 0;
}
