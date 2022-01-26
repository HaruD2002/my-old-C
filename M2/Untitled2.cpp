#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
/*	
	if (a+b>c)
		printf("it is a triagle");
	else if (a+b==c)
		printf("invalid");
	else if (a+c >b)
		printf("it is a triangle");
	else if (a+c ==b)
		printf("invalid");
	else if (b+c >a)
		printf("it is a triangle");
	else 
		printf("invalid triangle");
*/
	if (a+b >c) && (a+c>b) && (b+c>a)
	printf("triangle");
	else 
	printf("invalid");	
	
	
	return 0;
}
