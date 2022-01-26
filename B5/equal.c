#include <stdio.h>

int main(){
	
	int n; 
	
	printf ("Enter n = ");
	scanf ("%d", &n);
	
	if (n>0){ // n>0
		printf ("%d is positive" , n );
	}
	else if (n==0){ //n = 0
		printf ("%d is equal to 0", n);
	}
	else { //n < 0
		printf ("%d is negative",n);
	}
	return 0;
}
