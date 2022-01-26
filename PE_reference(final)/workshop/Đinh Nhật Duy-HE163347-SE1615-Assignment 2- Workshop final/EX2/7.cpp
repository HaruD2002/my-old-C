#include <stdio.h>
#include <math.h>

int main()
{
	double i, s = 0.0;
    int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s = s + 1/i;
	}
   printf("Tong cua S la %f", s);
   return 0;
}
                   