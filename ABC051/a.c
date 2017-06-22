#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  char s[20];
  int i;

  scanf("%s", s);

  for (i = 0;i<20;i++){
    if(s[i]==',') {
      s[i] = ' ';
    }
  }

  printf("%s", s);
  return 0;
}