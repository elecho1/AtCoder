#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  if (a==1) {
    a = 14;
  }
  if(b == 1){
    b = 14;
  }
  if(a>b){
    printf("Alice");
  } else if(a == b){
    printf("Draw");
  }
  else {
    printf("Bob");
  }

  return 0;
}