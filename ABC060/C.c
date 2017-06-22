#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int i, j;

  int n, t;
  int before;
  int current = -1;

  long long int sum = 0;

  scanf("%d %d", &n, &t);
  for (i = 0; i < n;i++){
    before = current;
    scanf("%d", &current);
    if (before < 0) {
      continue;
    }

    if (current - before > t) {
      sum += t;
    }
    else {
      sum += current - before;
    }
  }

  sum += t;

  printf("%lld", sum);
  
  return 0;
}