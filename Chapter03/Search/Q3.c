#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[])
{
  int num_target = 0;
  for(int i = 0; i < n; i++)
    if(a[i] == key)
      idx[num_target++] = i;
  return num_target;
}

int main(void)
{
  int i, nx, ky, nk;
  int *x;
  int *idx;
  puts("선형 검색");
  printf("요소 개수 : ");
  scanf("%d", &nx);
  x = calloc(nx, sizeof(int));
  idx = calloc(nx, sizeof(int));
  for(i = 0; i < nx; i++) {
    printf("x[%d] : ", i);
    scanf("%d", &x[i]);
  }
  printf("검색값 : ");
  scanf("%d", &ky);
  nk = search_idx(x, nx, ky, idx);
  if(nk == 0)
    puts("검색에 실패했습니다.");
  else
    printf("%d(은)는 %d개 있습니다.\n", ky, nk);
  free(x);
  free(idx);

  return 0;
}