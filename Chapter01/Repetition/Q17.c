#include <stdio.h>

void spira(int n);

int main(void) {
  int n;
  do {
    printf("몇 단 피라미드입니까? : ");
    scanf("%d", &n);
  } while(n <= 0);

  spira(n);
  return 0;
}

void spira(int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < n-i; j++) {
      printf(" ");
    }
    for(int k = 0; k < 2*i-1; k++) {
      printf("*");
    }
    for(int l = 0; l < n-i; l++) {
      printf(" ");
    }
    printf("\n");
  }
  return;
}