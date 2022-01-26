#include <stdio.h>
#include <math.h>

int main()
{
   int i, x, n, a, sum=0;
   printf("Nhap n so nguyen duong: ");
   scanf("%d", &n);
   printf("Nhap so x: ");
   scanf("%d", &x);
   for (i=0;i<=n;i++)
   {
   	printf("Nhap he so a%d: ", i);
   	scanf("%d", &a);
   	sum=sum+a*pow(x,i);
   }
   printf("Tong F(x) la: %d", sum);
   return 0;
}