#include <stdio.h>
#include <stdlib.h>

double avgof(const int a[], int n)
{
  int i;
  double sum = 0;
  double avg;
  for(i = 0; i < n; i++)
    sum += a[i];
  avg = sum/n;
  return avg;
}

int main(void)
{
  int i;
  int *height;
  int number;
  printf("사람 수 : ");
  scanf("%d", &number);
  height = calloc(number, sizeof(int));
  printf("%d 사람의 키를 입력하세요.\n", number);
  for(i = 0; i < number; i++) {
    printf("height[%d] : ", i);
    scanf("%d", &height[i]);
  }
  printf("합은 %f입니다.\n", avgof(height, number));
  free(height);

  return 0;
}