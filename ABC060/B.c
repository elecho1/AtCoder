#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int gcd(int a, int b) {
    int temp;
    
    while (1) {
      if (b < a) {
        temp = a;
        a = b;
        b = temp;
      }
  
      b = b % a;
  
      if (b == 0) {
        break;
      }
    }
  
    return a;
  }

int main() {
  int i, j;
  int a, b, c;
  int gcdnum;

  scanf("%d %d %d", &a, &b, &c);

  gcdnum = gcd(a, b);

  if (c % gcdnum == 0) {
    printf("YES");
  }
  else {
    printf("NO");
  }

  return 0;
}
