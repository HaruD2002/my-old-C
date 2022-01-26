#include <stdio.h>

int main() {
	
	float a,b,c ; 
	
	printf ("Enter A:");
	scanf ("%f", &a);
	
	printf ("Enter B:");
	scanf ("%f", &b);
	
	printf ("Enter C:");
	scanf ("%f", &c);
	
	if (a>b && a>c){ // find maximum value
	printf ("%.2f is a maximum value \n", a);
	}
	if (b>a && b>c) {
	printf ("%.2f is a maximum value \n", b);
	}
	else {
	printf ("%.2f is maximum value \n", c);
	}
	
	if (a<b && a<c){ // find minimum value
	printf ("%.2f is a minimum value \n", a);
	}
	if (b<a && b<c) {
	printf ("%.2f is a minimum value \n", b);
	
	if (c<a && c<b)  {
	printf ("%.2f is minimum value \n", c);
	
	}

	
	if (a>b && a>c) { // a is a biggest number
		if (b>c)
		printf ("Incress order %f < %f < %f", c,b,a);
		else 
		printf ("Incress order %f < %f < %f", b,c,a);
	}
	
	if (b>a && b>c) { // b is biggest number
		if (a>c)
		printf ("Incress order %f < %f < %f", c,a,b);
		else 
		printf ("Incress order %f < %f < %f", a,c,b);
	}
	
	if (c>a && c>b) { // c is biggest number
		if (a>b)
		printf ("Incress order %f < %f < %f", b,a,c);
		else
		printf ("Incress order %f < %f < %f", a,b,c);
	}
		
}
