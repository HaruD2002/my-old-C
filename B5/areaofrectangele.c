#include  <stdio.h>

int main(){
	float a,b, area=0 ;

	printf("Enter heigh:");
	scanf ("%f" , &a);
	
	printf ("Enter  Width:"); 
	scanf ("%f", &b);
	
	area = a*b; 
		
	printf ("Area of a rectangle = %.2f",area);
}
