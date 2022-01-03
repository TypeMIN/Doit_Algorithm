#include <stdio.h>

int min4(int a, int b, int c, int d) {
  int min = a;
  if(b < min) min = b;
  if(c < min) min = c;
  if(d < min) min = d;
  return min;
}

int main(void) {
  int nums[4];
  printf("네 정수의 최솟값을 구합니다. \n");
  for(int i = 0; i < 4; i++){
    printf("정수를 입력해주세요(%d/4) : ", i+1);
    scanf("%d", &nums[i]);
  }

  printf("최솟값은 %d입니다. \n", min4(nums[0], nums[1], nums[2], nums[3]));
  return 0;
}