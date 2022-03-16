#include <stdio.h>

int main(void) {
  int width, height;
  printf("직사각형을 출력합니다.\n");
  printf("높이 : ");
  scanf("%d", &height);
  printf("너비 : ");
  scanf("%d", &width);
  for(int i = 0; i < height; i++) {
    for(int j = 0; j < width; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}