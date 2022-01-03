#include <stdio.h>

int GaussSum(int a) {
  int sum;
  sum = (1+a) * a / 2;
  return sum;
}

int main(void) {
  int n;
  printf("1부터 n까지의 합을 구합니다.\n");
  printf("n 입력 : ");
  scanf("%d", &n);

  printf("1부터 %d까지의 합은 %d입니다.\n", n, GaussSum(n));
  return 0;
}