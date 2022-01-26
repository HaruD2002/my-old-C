#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, count, sum;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	count=0;
	for (i=1;i<=n;i++)
	{
		if (i%3==1 && i>1)
		{
			count=count+1;
		}
		if (i%3==0)
		{
			sum=sum+i;
		}
    }
	printf("So luong cac so tu nhien khong lon hon n, chia 3 du 1 la: %d", count);
	printf("\nTong cac so khong lon hon n chia het cho 3 la: %d", sum);
}