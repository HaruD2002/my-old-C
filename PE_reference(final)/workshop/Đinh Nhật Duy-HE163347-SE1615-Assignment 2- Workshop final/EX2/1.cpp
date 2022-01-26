#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("So nguyen a la: ");
	scanf("%d", &a);
	printf("So nguyen b la: ");
	scanf("%d", &b);
	printf("So nguyen c la: ");
	scanf("%d", &c);
	
	if (a>b)
	{
		if (a>c)
		{
			printf("So a la so lon nhat");
		}
	}
	
	if (b>a)
	{
		if (b>c)
		{
			printf("So b la so lon nhat");
		}	
	}
	
	if (c>a)
	{
		if (c>b)
		{
			printf("So c la so lon nhat");
		}
	}
}