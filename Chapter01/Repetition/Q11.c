#include <stdio.h>

int main(void) {
  int n, digits;
  do {
    printf("양의 정수 n 입력 : ");
    scanf("%d", &n);
  } while(n <= 0);

  digits = 0;
  while(n > 0) {
    n /= 10;
    digits++;
  }

  printf("그 수는 %d자리입니다.\n", digits);
  return 0;
}