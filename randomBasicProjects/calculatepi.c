// IMPORTANT!!! This apparently doesn't work. I think it's best to rework it a
// litte bit and do it iteratively... but that can be done later.

#include <math.h>
#include <stdio.h>

// uses the Leibniz formula
double calculatePiRecursive(double count) {
  if (count == 1) {
    return 4;
  }
  return 4 * pow(-1, count + 1) * (1.0 / (2 * count - 1)) +
         calculatePiRecursive(count - 1);
}

int main(int argc, char *argv[]) {
  // get user input
  int count = *argv[1];

  // call recursive function that many times
  double result = calculatePiRecursive(count);
  printf("%f\n", result);
  return 0;
}
