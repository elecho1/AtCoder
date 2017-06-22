#include <stdio.h>

int main() {
  long long int a, b, x, c1, c2;
  scanf("%lld %lld %lld", &a, &b, &x);
  if (a == 0) {
    c1 = -1;
  } else {
    c1 = (a - 1) / x;
  }
  if (b == 0) {
    c2 = 0;
  } else {
    c2 = b / x;
  }

  printf("%lld\n", c2 - c1);
  return 0;
}