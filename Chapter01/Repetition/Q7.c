#include <stdio.h>

int main(void) {
  int n, sum;
  printf("1부터 n까지의 합을 구합니다.\n");
  printf("n 입력 : ");
  scanf("%d", &n);

  sum = 0;
  for(int i = 1; i < n; i++) {
    sum += i;
    printf("%d + ", i);
  }
  sum += n;
  printf("%d = %d\n", n, sum);
  return 0;
}