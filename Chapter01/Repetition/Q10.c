#include <stdio.h>

int main(void) {
  int a, b;
  printf("a의 값 : ");
  scanf("%d", &a);
  b = a+1;
  do {
    if(a >= b)
      printf("a보다 큰 값을 입력하세요!\n");
    printf("b의 값 : ");
    scanf("%d", &b);
  } while(a >= b);

  printf("b-a는 %d입니다.\n", b-a);
  return 0;  
}