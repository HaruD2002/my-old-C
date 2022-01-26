#include <stdio.h>
int main() {
  int n, i, identifier = 0;
  printf("Dien so nguyen duong n: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      identifier = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 khong phai nguyen to.");
  } 
  else {
    if (identifier == 0)
      printf("%d la so nguyen to.", n);
    else
      printf("%d khong phai la so nguyen to.", n);
  }

  return 0;
}