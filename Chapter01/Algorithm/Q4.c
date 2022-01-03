#include <stdio.h>

int med3(int a, int b, int c) {
  if(a >= b)
    if(c >= a)
      return a;
    else if(b >= c)
      return b;
    else
      return c;
  else
    if(c >= b)
      return b;
    else if(a >= c)
      return a;
    else
      return c;
}

int main(void) {
  int nums[3];
  printf("세 정수의 중앙값을 구합니다. \n");
  for(int i = 0; i < 3; i++){
    printf("정수를 입력해주세요(%d/3) : ", i+1);
    scanf("%d", &nums[i]);
  }

  printf("중앙값은 %d입니다. \n", med3(nums[0], nums[1], nums[2]));
  return 0;
}