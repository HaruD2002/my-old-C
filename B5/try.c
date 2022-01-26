#include <stdio.h>


int add (int a, int b);

int main () {
	int m,n,sum;
	
	scanf ("%d%d", &n,&m);
	
	sum=add(n,m);
	printf ("%d",sum);
	
}

int add(int a, int b){
	int result; 
	
	result = a+b;
	
	return result;
}
