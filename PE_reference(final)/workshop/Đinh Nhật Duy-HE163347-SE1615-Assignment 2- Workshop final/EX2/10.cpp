#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int i,j,k;
	for (i=1;i<=20;i++)
	{
		for (j=1;j<=33;j++)
		{
			k=100-i-j;
			if (5*i+3*j+k/3 == 100 && k%3==0)
			{
				printf("\nTrau dung %d, trau nam %d, trau gia %d.", i,j,k);
			}
	    }
    }
    return 0;
}