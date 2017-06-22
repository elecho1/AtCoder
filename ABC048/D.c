#include <stdio.h>
#include <string.h>

int main() {
  char c[100001];
  scanf("%s", c);
  int len = strlen(c);
  int winner;

  // printf("%d", len);

  if (len % 2 == 0) {
    if (c[0] == c[len - 1]) {
      winner = 0;
    } else {
      winner = 1;
    }
  } else {
    if (c[0] == c[len - 1]) {
      winner = 1;
    } else {
      winner = 0;
    }
  }

  if (winner == 0) {
    printf("First\n");
  } else {
    printf("Second\n");
  }

  return 0;
}