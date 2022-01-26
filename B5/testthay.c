#include <stdio.h>

int checkPrime(int n);

int main (){
	int a,b,x,temp,i;
	
	printf ("Enter two positive integer:");
	scanf ("%d%d", &a,&b);
	
	if (a>b){
		temp = a;
		a =b ;
		b = temp;
	}
	
	printf ("Prime number between %d and %d are: ",a,b);

	for (i=b; i<=b; i++){
		if (checkPrime(i) == 1)
			printf ("%d", i);
	}
	return 0;
}
int checkPrime(int n){
	int i, frag = 1; 
	for (i=2;i<=n;i++){
		if (n%i ==0){
			frag = 0;
			break;
		}
	}
	return frag;
}
