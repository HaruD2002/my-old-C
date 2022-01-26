#include <stdio.h>

int main (){
	float a, b ;
	char c ;
	
	printf ("Enter an equation: ");
	scanf ("%f %c %f", &a,&c, &b);
	
	switch(c){
		case '+':
		printf ("%.2f %c %.2f = %.2f",a,c,b, a+b);
//	printf ("%d",a+b);
		break;
		
		case '-':
		printf ("%.2f %c %.2f = %.2f",a,c,b,a-b);
		break;
		
		case '*':
		printf ("%.2f %c %.2f =%.2f",a,c,b,a*b);
		break;
		
		case '/':
		if (b==0){
			printf ("Devide by zero");
		}
		else {
			printf ("%.2f %c %.2f= %.2f " ,a,c,b,a/b);
		}
		break;
		
		default  :
		printf ("enter the valid math symbol between +, -, *, /");	
		
	}
	
	return 0;
}
