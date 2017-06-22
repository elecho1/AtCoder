#include <stdio.h>

int main() {
  char s;
  scanf("%*[^ ]%*c%c%*s", &s);
  printf("A%cC\n", s);
  return 0;
}