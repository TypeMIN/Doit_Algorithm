# include <stdio.h>

int main(void)
{
  int i;
  int a[5] = {1, 2, 3, 4, 5};
  int na = sizeof(a) / sizeof(a[0]);

  for(i = 0; i < na; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return 0;
}