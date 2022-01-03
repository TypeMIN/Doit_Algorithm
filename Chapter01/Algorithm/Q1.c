#include <stdio.h>

int max4(int a, int b, int c, int d) {
  int max = a;
  if(b > max) max = b;
  if(c > max) max = c;
  if(d > max) max = d;
  return max;
}

int main(void) {
  int nums[4];
  printf("네 정수의 최댓값을 구합니다. \n");
  for(int i = 0; i < 4; i++){
    printf("정수를 입력해주세요(%d/4) : ", i+1);
    scanf("%d", &nums[i]);
  }

  printf("최댓값은 %d입니다. \n", max4(nums[0], nums[1], nums[2], nums[3]));
  return 0;
}