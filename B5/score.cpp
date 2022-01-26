#include <stdio.h>

int main () {
	
	float score; 
	
	printf ("Enter score :");
	scanf ("%f", &score);
	
	if (score>0 && score<=10){
		printf ("%.2f is the valid score" , score);
	}
	else {
		printf ("%.2f is not a valid score", score);
	}
	return 0;
}
