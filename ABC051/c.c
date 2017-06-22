#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int i;
  int sx, sy, tx, ty, gx, gy;

  scanf("%d %d %d %d", &sx, &sy, &tx, &ty);

  gx = tx - sx;
  gy = ty - sy;
  // first
  for (i = 0; i < gx; i++) {
    printf("R");
  }
  for (i = 0; i < gy; i++) {
    printf("U");
  }
  for (i = 0; i < gx; i++) {
    printf("L");
  }
  for (i = 0; i < gy; i++) {
    printf("D");
  }
  // second
  printf("D");
  for (i = 0; i < gx + 1; i++) {
    printf("R");
  }
  for (i = 0; i < gy + 1; i++) {
    printf("U");
  }
  printf("L");
  printf("U");
  for (i = 0; i < gx + 1; i++) {
    printf("L");
  }
  for (i = 0; i < gy + 1; i++) {
    printf("D");
  }
  printf("R");

  return 0;
}
