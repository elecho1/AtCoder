#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int i, j;
  int H, W;

  char temp[105];

  scanf("%d %d ", &H, &W);

  for (i = 0; i < W+2;i++){
    printf("#");
  }
  printf("\n");

  for (i = 0; i < H;i++){
    scanf("%[^\n]%*c", temp);
    printf("#");
    printf("%s", temp);
    printf("#\n");
  }

  for (i = 0; i < W+2;i++){
    printf("#");
  }
  printf("\n");

  return 0;
}