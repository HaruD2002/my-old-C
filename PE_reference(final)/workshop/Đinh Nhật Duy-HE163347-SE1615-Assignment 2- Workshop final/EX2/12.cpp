#include <stdio.h>
#include <math.h>

int main()
{
	int i,n,S=0,fact=1;
	printf("Nhap n: ");
	scanf("%d",&n);
	 for (i = 1; i <= n; i++)
    {
	    fact = fact * i;
        S= S + i*fact;
    }
    printf("Tich S = %d\n", S);
    return 0;
}