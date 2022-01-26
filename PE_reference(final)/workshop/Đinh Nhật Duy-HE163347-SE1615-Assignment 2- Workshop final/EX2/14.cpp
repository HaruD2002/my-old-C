#include<stdio.h>
#include<math.h>

int main()
{
	float pisum=0, epsilon=0.001, y=0;
	int i=0;
	do{
		y= 1.0/(2*i+1);
		pisum=pisum+pow(-1,i)*y;
		printf("\tg%d = %f,\t s%d=%f\n", i, y, i, pisum);
		i++;
	}while(y>=epsilon);
	printf("So lan lap la: %d", i-1);
	printf("\npi/4 bang: %f",pisum);
}