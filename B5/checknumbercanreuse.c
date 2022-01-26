#include <stdio.h>

int checkNum(int n){
	int frag =1; 
	if (n%2 == 0){
		frag =1;
	}
	else {
		frag =0;
	}
}

int main(){
	int n; 
	printf("Input n:");
	scanf ("%d",&n);
	
	if  (checkNum(n)== 1){
		printf ("This is an even number");
	}
	else {
		printf ("This is an odd number");
		
	}
}
