#include <stdio.h>

int ucln(int a, int b)
{
    if (a == 0)
        return b;
    return ucln(b%a, a);
}

int main()
{
    int a,b;
	printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("ucln(%d, %d) = %d", a, b, ucln(a, b));
    return 0;
}