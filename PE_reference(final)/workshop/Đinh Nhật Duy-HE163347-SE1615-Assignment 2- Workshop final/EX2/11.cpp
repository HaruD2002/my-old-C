#include <stdio.h>
#include <math.h>

int main()
{
	int i,n,sum=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		sum = sum + (2*i + 1);
	}
	printf("Tong S la: %d", sum);
}