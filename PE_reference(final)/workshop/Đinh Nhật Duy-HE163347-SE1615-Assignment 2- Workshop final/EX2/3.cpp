#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, delta, x, x1, x2;
	printf("So thuc a la: ");
	scanf("%f", &a);
	printf("So thuc b la: ");
	scanf("%f", &b);
	printf("So thuc c la: ");
	scanf("%f", &c);
	delta = b*b - 4*a*c;
	if (delta<0)
	{
		printf("The equation has no solutions!");
	}
	if (delta==0)
	{
		x = -b / (2*a);
		printf("The solution for the equation is: %.2f", x);
	}
	if (delta>0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("The solutions for the equation are: %.2f %.2f", x1, x2);
	}
	return 0;
}