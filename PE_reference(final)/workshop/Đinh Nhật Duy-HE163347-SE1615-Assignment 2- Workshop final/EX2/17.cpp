#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Dien so nguyen duong n: ");
    scanf("%d", &n);
    printf("Day so Fibonacci la: ");

    for (i = 1; i <= n; ++i) {
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d ", t1);
    }
    printf("\nSo Fibonacci thu %d la: %d", n,t1);
    return 0;
}