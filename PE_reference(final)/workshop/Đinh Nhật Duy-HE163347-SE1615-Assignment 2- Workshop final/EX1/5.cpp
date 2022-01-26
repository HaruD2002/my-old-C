#include <stdio.h>
#include <math.h>

int main()
{
	int Sum,s, opA, opB, opC;
	printf("So nguyen 3 chu so la: ");
	scanf("%d", &s);
	opA=SoNguyen/100;
	opB=(s-(opA*100))/10;
	opC=s-(opA*100)-(opB*10);
	Sum = opA + opB + opC;
	printf("Tong 3 chu so la: %d + %d + %d = %d", opA, opB, opC, Sum);
}
