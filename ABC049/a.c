#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  char data[] = {"aiueo"};
  char c;
  int flag = 0;

  scanf("%c", &c);

  for (int i = 0; i < 5;i++){
    if (c == data[i]) {
      flag = 1;
      break;
    }
  }
  
  if(flag == 0) {
    printf("consonant\n");
  }
  else {
    printf("vowel\n");
  }
   return 0;
}