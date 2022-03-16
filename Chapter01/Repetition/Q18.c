#include <stdio.h>

void nrpira(int n);

int main(void) {
  int n;
  do {
    printf("몇 단 피라미드입니까? : ");
    scanf("%d", &n);
  } while(n <= 0);

  nrpira(n);
  return 0;
}

void nrpira(int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < i-1; j++) {
      printf(" ");
    }
    for(int k = 0; k < -2*i+2*n+1; k++) {
      printf("%d", i%10);
    }
    for(int l = 0; l < i-1; l++) {
      printf(" ");
    }
    printf("\n");
  }
  return;
}