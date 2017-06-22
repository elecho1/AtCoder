#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  long long int i, j;
  long long int H, W;

  scanf("%lld %lld", &H, &W);

  long long int minH, minW;
  long long int tempH, tempW;
  if (H % 3 == 0) {
    printf("0");
    return 0;
  }
  if (W % 3 == 0) {
    printf("0");
    return 0;
  }

  tempH = H - H / 3;
  minH = W;
  if (W % 2 == 0) {
    if (minH > (tempH * W / 2 - W * (H - tempH))) {
      minH = (tempH * W / 2 - W * (H - tempH));
    }
  } else {
    if (minH > (tempH * (W + 1) / 2 - W * (H - tempH))) {
      minH = (tempH * (W + 1) / 2 - W * (H - tempH));
    }
  }
  tempH--;
  if (W % 2 == 0) {
    if (minH > -(tempH * W / 2 - W * (H - tempH))) {
      minH = -(tempH * W / 2 - W * (H - tempH));
    }
  } else {
    if (minH > -(tempH * (W - 1) / 2 - W * (H - tempH))) {
      minH = -(tempH * (W - 1) / 2 - W * (H - tempH));
    }
  }

  tempW = W - W / 3;
  minW = H;
  if (H % 2 == 0) {
    if (minW > (tempW * H / 2 - H * (W - tempW))) {
      minW = (tempW * H / 2 - H * (W - tempW));
    }
  } else {
    if (minW > (tempW * (H + 1) / 2 - H * (W - tempW))) {
      minW = (tempW * (H + 1) / 2 - H * (W - tempW));
    }
  }
  tempW--;
  if (H % 2 == 0) {
    if (minW > -(tempW * H / 2 - H * (W - tempW))) {
      minW = -(tempW * H / 2 - H * (W - tempW));
    }
  } else {
    if (minW > -(tempW * (H - 1) / 2 - H * (W - tempW))) {
      minW = -(tempW * (H - 1) / 2 - H * (W - tempW));
    }
  }

  if (minH < minW) {
    printf("%lld", minH);
  }
  else {
    printf("%lld", minW);
  }

  return 0;
}