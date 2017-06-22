#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int i;
  int a[100000];
  int b[100000];

  for (int i = 0; i < 100000; i++) {
    a[i] = 0;
    b[i] = 0;
  }

  int n;
  int temp;
  long int sum = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d%d", &a[i], &b[i]);
  }

  for (i = n - 1; i >= 0; i--) {
    if ((a[i]+sum) % b[i] == 0) {
      temp = 0;
    } else {
      temp = b[i] - ((a[i]+sum) % b[i]);
    }
    sum += temp;
  }

  printf("%ld", sum);

  return 0;
}
