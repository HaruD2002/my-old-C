#include <stdio.h>
#include <math.h>

int main()
{
	int x,y,i;
	int calc;
	printf("Nhap gia tri x: ");
	scanf("%d", &x);
	printf("Nhap gia tri y: ");
	scanf("%d", &y);
	calc = 1;
	for (i=0;i<y;i++)
	{
		calc=calc*x;
	}
	printf("Gia tri cua phep tinh %d mu %d la: %d", x, y, calc);
}
