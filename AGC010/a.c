#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int i, j;
  int n;
  int data[100001];
  int odd=0, even=0;
  long int temp;
  int flag=0;

  scanf("%d", &n);

  for (i = 0; i < n;i++){
    scanf("%ld", &temp);
    if(temp % 2 == 0){
      even++;
    }
    else {
      odd++;
    }
  }
  

  if (odd%2 == 1) {
//    flag = 1;
printf("NO");
  }else {
    printf("YES");
  }

  /*
  else {
    even += odd / 2;
    while (even >1){
      if (even % 2 == 1){
        flag = 1;
        break;
      }
      else {
        even = even / 2;
      }
    }
  }
  */


   return 0;
}