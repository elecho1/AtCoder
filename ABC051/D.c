#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
static int MAX = 100;

typedef struct Node {
  int i;
  int j;
  int c;
  int gone;
};

Node hen[1010];

int i, j;
int n, m;
int hgone[101][101];
int tgone[101];
int tyo[101][101];

int sum = -1;
int sumtemp;
int a, b, c;

void search(int x, int y) { tgone[x] = 1; }

int main() {
  for (i = 0; i < 101; i++) {
    for (j = 0; j < 101; j++) {
      tyo[i][j] = 0;
      hgone[i][j] = 0;
    }
  }

  for (i = 0; i < 1010; i++) {
    hen[i].gone = 0;
  }
  scanf("%d %d", &n, &m);
  for (i = 0; i < m; i++) {
    scanf("%d %d %d", &hen[i].i, &hen[i].j, &hen[i].c);
    tyo[hen[i].i][hen[i].j] = c;
    tyo[hen[i].j][hen[i].i] = hen[i].c;
  }

  for (i = 0; i < 101; i++) {
    tgone[i] = 0;
  }
  return 0;
}

void dijkstra() {
  int minv;
  int d[MAX], color[MAX];
}
