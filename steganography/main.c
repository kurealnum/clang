#include "bmp.h"
#include <stdio.h>
#include <stdlib.h>

// TODO
// get user input
// read file
// get to the "body" of the file
// iterate through the body, and replace the least 2 important bits in sections
// of 4 close the file

int main(void) {
  // opening the file
  FILE *fptr;
  fptr = fopen("testfile.bmp", "r");
  if (fptr == NULL) {
    return 1;
  };

  // this section is yoinked from CS50
  BITMAPFILEHEADER bf;
  fread(&bf, sizeof(BITMAPFILEHEADER), 1, fptr);

  // Read infile's BITMAPINFOHEADER
  BITMAPINFOHEADER bi;
  fread(&bi, sizeof(BITMAPINFOHEADER), 1, fptr);

  // Get image's dimensions
  int height = abs(bi.biHeight);
  int width = bi.biWidth;

  // end yoinked section
  fclose(fptr);
}
