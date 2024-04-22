// TODO
// get user input
// read file
// get to the "body" of the file
// iterate through the body, and replace the least 2 important bits in sections
// of 4 close the file

#include <stdio.h>
int main(void) {
  // opening the file
  FILE *fptr;
  fptr = fopen("testfile.bmp", "r");

  fclose(fptr);
}
