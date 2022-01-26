#include <stdio.h>
#include <math.h>

int main()
{
	int n, sum1, sum2, sum3, i, a;
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		sum1=sum1+i;
		a=i%2;
		if(a==0)
		{
			sum3=sum3+i;
		}
		sum2=sum1-sum3;
	}
	printf("Tong cac so tu nhien khong nho hon n la: %d",sum1);
	printf("\nTong cac so tu nhien le khong nho hon n la: %d",sum2);
	printf("\nTong cac so tu nhien chan khong nho hon n la: %d",sum3);
	getchar();
}