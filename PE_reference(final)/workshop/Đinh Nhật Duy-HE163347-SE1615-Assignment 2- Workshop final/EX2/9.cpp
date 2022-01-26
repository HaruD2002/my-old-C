#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, a, max=0;
	printf("Nhap n so nguyen: ");
	scanf("%d", &n);
    for (i=0;i<n;i++)    
    {
 	printf("Nhap so nguyen: ");
		scanf("%d", &a);
		if (max <= a)
		{
			max = a;
		}
    }
	printf("So lon nhat trong day la: %d", max);
}