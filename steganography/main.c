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

  // TODO: Resolve issue with filetype
  printf("%d", bf.bfType);

  // Ensure infile is (likely) a 24-bit uncompressed BMP 4.0
  if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
      bi.biBitCount != 24 || bi.biCompression != 0) {
    fclose(fptr);
    printf("Unsupported file format.\n");
    return 6;
  }

  // Get image's dimensions
  int height = abs(bi.biHeight);
  int width = bi.biWidth;

  // end yoinked section
  fclose(fptr);
}
