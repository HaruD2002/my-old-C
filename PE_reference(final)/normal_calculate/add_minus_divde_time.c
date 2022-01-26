#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	:)
	int a=0,b=0;

	scanf("%d%d",&a,&b);
	printf("Sum of %d and %d = %d\n",a,b,a+b);
	printf("Min = %d\n", a-b);
	printf("Mul = %d\n", a*b);
	printf("Div = %d Remainder = %d", a/b,a%b);
	
	return 0;
}
