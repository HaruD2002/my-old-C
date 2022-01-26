#include <stdio.h>

int main(){
	int n ;	
	do {
		printf ("Number of time to toss the coin: ");
		scanf (" %d",&n);		
		
		if (n<0){
			printf ("\nEnter the possitive number of time: ");1
		}		
		fflush(stdin);
	} while (n<0);
	
	
}

int toss(int i){
	
	i = rand() %2; 
	
	if (i ==0){
		return 0;
	}
	else {
		return 1;
	}
}
