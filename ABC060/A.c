#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int i, j;
  int la, lb, lc;

  char a[20];
  char b[20];
  char c[20];

  //scanf("%[^\n]%*c", a);
  scanf("%s%*c", a);
  scanf("%s%*c", b);
  scanf("%s%*c", c);
  la = strlen(a);
  lb = strlen(b);
  lc = strlen(c);

  if (a[la-1] != b[0]) {
    printf("NO");
  }
  else if (b[lb-1]!=c[0]) {
    printf("NO");
  }
  else {
    printf("YES");
  }

  return 0;
}