#include <stdio.h>

void num (int n);
void point (int *n);

int main(){
	int n = 0;
	num(n);
	printf ("call by value:%d\n",n);
	point(&n);
	printf ("call by pointer:%d",n);
}

void num (int n){
	n=100;
}
void point (int *n){
	*n=100;
}

