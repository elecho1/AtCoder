#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i, j;
  long int n;
  long int data[100001];
  long int dif[100001];
  //  long int times[100001];
  long long int sum = 0;
  long int times;
  int tme[100001];
  long long int one;
  long int sum2 = 0;
  int flag = 0;

  scanf("%ld", &n);

  for (i = 0; i < n; i++) {
    scanf("%ld", & data[i]);
    sum += data[i];
  }

  one = n * (n + 1) / 2;
  if (sum % one != 0) {
    flag = 1;
  } else {
    times = sum / one;
    for (i = 1; i < n; i++) {
      dif[i] = data[i] - data[i - 1];
    }
    dif[0] = data[0] - data[n - 1];

    for (i = 0; i < n; i++) {
      if ((times - dif[i]) % n != 0) {
        flag = 1;
        break;
      } else {
        tme[i] = (times - dif[i]) / n;
      }
      //     printf("%ld, %lld, %ld\n", i, (times - dif[i]), (tme[i] * (n)));
    }
    if (flag == 0) {
      for (i = 0; i < n; i++) {
        sum2 += tme[i];
      }
    }
    for (i = 0) }
  if (flag == 0) {
    if (sum2 == times) {
      printf("YES");
    } else {
      printf("NO");
    }
  } else {
    printf("NO");
  }

  return 0;
}