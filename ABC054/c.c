#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, m;
int map[9][9];
int a, b;
int list[9];
int ans = 0;

void search(int c, int l) {
  int i;
  if (list[l] == 1) {
    return;
  } else {
    list[l] = 1;
  }
  if (c == n) {
    ans++;
    list[l] = 0;
    return;
  }

  for (i = 1; i <= n; i++) {
    if (map[l][i] == 1) {
      search(c + 1, i);
    }
  }
  list[l] = 0;
  return;
}

int main() {
  int i, j;

  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      map[i][j] = 0;
    }
    list[i] = 0;
  }
  scanf("%d %d", &n, &m);
  for (i = 0; i < m; i++) {
    scanf("%d %d", &a, &b);
    map[a][b] = 1;
    map[b][a] = 1;
  }

  search(1, 1);

  printf("%d", ans);

  return 0;
}