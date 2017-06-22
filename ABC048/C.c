#include <stdio.h>

int main() {
  int N;
  int x;
  int left;
  int right;
  int temp;
  long long int c = 0;

  scanf("%d %d", &N, &x);
  scanf(" %d", &left);
  for (int i = 1; i < N; i++) {
    scanf(" %d", &right);
    temp = left + right - x;
    if (temp > 0) {
      if (temp <= right) {
        right -= temp;
        c += temp;
      } else {
        right = 0;
        c += temp;
      }
    }
    left = right;
  }

  printf("%lld\n", c);

  return 0;
}