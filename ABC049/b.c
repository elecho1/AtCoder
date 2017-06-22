#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int h, w;
  int i;
  scanf("%d %d%*c", &h, &w);

  char buf[102];
  for (i = 0; i < h;i++) {
    scanf("%s%*c", buf);
    printf("%s\n", buf);
    printf("%s\n", buf);
  }
  return 0;
}