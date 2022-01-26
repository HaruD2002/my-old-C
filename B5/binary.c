#include <stdio.h>

long long convert (int n);

int main(){
	int n; 
	printf ("Enter a decimal number: ");
	scanf ("%d", &n);
	
	printf ("%d in decimal =%d in binary", n, convert(n));
	
}

long long convert(int n){
	int remain ;
	long binary = 0, i=1;
	
	while (n!=0){
	remain = n%2; 
        n = n/2; 
        binary= binary + (remain*i); 
        i = i*10; 
	}
	return binary;
}
	

