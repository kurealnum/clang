#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  double result;
  int denom = 1;

  for (int i = 0; i < pow(10, 6); i++) {
    if (i % 2 == 0) {
      result += 4.0 / denom;
    } else {
      result -= 4.0 / denom;
    };

    denom += 2;
  }

  printf("%f\n", result);
  return 0;
}
