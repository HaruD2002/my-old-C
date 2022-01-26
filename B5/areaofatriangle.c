#include <stdio.h>

int main() {
	
	
	float b ,h, area = 0  ; 
	
	printf ("Enter base:");
	scanf ("%f", &b);
	
	printf ("Enter Height:");
	scanf ("%f", &h);
	
	area = (b * h) * 0.5;
	
	printf ("Area of a triangle = %.2f \n", area);
	
	printf ("Address of area = %p", &area);
	
	return 0;
}
