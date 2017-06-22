#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  long int x, y;
  long int ans;
  scanf("%ld %ld", &x, &y);

  if(x*y<0) {
    ans = fabs(fabs(x) - fabs(y)) + 1;
  }
  else if (x*y == 0) {
    if (y>x) {
      ans = y - x;
    }
    else {
      ans = x - y + 1;
    }
  }
  else if(x<y) {
    ans = y - x;
  }
  else {
    ans = x - y + 2;
  }

  printf("%ld", ans);

  return 0;
}