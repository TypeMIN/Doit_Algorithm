#include <stdio.h>

int sumof(int a, int b) {
  int i, j, sum;
  if(a <= b) {
    i = a;
    j = b;
  }
  else {
    i = b;
    j = a;
  }

  sum = 0;
  for(;i <= j; i++) {
    sum += i;
  }
  return sum;
}

int main(void) {
  int a, b;
  printf("a부터 b까지의 합을 구합니다.\n");
  printf("a 입력 : ");
  scanf("%d", &a);
  printf("b 입력 : ");
  scanf("%d", &b);

  printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sumof(a, b));
  return 0;
}