#include<stdio.h>
#include<math.h>
int isPrimeNumber(int n) {
	if (n < 2) {
	return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = (int)sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 int main() {
 int i, n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("So nguyen to nho nhat lon hon n %d la: \n", n);
    for (i = 3; i < 2*n; i+=2) {
        if (isPrimeNumber(i) == 1;i>n) {
            printf("%d ", i);
            break;
        }
    }
}