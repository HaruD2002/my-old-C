#include<stdio.h>
#include<math.h>

int main()
{
	int n,i;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	printf("Cac uoc so cua %d la:", n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf(" %d",i);
		}
	}
	return 0;
}