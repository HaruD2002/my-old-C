#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, tongA, tongB, tongC;
	printf("So nguyen a la: ");
	scanf("%d", &a);
	printf("So nguyen b la: ");
	scanf("%d", &b);
	printf("So nguyen c la: ");
	scanf("%d", &c);
	tongA = b+c;
	tongB = a+c;
	tongC = a+b;
	if (tongA>a && tongB>b && tongC>c)
	{
		printf("Ba so nguyen %d, %d va %d la 3 canh cua tam giac", a,b,c);
	}
	else
	{
		printf("Ba so nguyen %d, %d va %d khong phai la 3 canh cua tam giac", a,b,c);
	}
	return 0;
}