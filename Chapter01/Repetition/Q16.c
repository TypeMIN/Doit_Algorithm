#include <stdio.h>

void triangleLB(int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return;
}

void triangleLU(int n) {
  for(int i = n; i >= 1; i--) {
    for(int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return;
}

void triangleRU(int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(j >= i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return;
}

void triangleRB(int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = n; j >= 1; j--) {
      if(j <= i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return;
}

int main(void) {
  int n;
  do {
    printf("몇 단 삼각형입니까? : ");
    scanf("%d", &n);
  } while(n <= 0);

  triangleLB(n);
  printf("\n");
  triangleLU(n);
  printf("\n");
  triangleRU(n);
  printf("\n");
  triangleRB(n);
  return 0;
}