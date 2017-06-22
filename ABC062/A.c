#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int i, j;
  int x, y;

  int nums[] = {-1, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};

  scanf("%d %d", &x, &y);

  if (nums[x] == nums[y]) {
    printf("Yes");
  }
  else {
    printf("No");
  }

  return 0;
}