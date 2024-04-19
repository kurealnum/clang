#include <stdio.h>
int main(void) {
  int inputArray[7] = {1, 2, 3, 4, 5, 6, 7};
  int target = 7;
  int l = 0;
  int r = (sizeof(inputArray) / sizeof(inputArray[0])) - 1;
  while (l <= r) {
    // not sure if this works without floor div
    int m = l + (r - l) / 2;
    if (inputArray[m] == target) {
      printf("Found the target! (%d)\n", inputArray[m]);
      break;
    } else if (inputArray[m] < target) {
      l = m + 1;
    } else {
      r = m - 1;
    }
    m = l / r;
  }
}
