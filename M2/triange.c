#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0,b=0,c=0;
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
	if (a+b >c && a+c>b && b+c>a)
	printf("triangle");
	else 
	printf("invalid");	
	
	
	return 0;
//	int a,b,c sort a,b,c
// he so phuong trinh bac 2 1 an in ra ket qua


}
