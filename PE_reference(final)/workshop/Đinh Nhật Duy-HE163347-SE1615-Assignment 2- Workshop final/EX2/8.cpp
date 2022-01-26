#include <stdio.h>
#include <math.h>

int main()
{
	int i, n, fact = 1;
    printf("Nhap so de tinh giai thua: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("Giai thua cua %d = %d\n", n, fact);
    return 0;
}