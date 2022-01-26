#include <stdio.h>

void swap (int *a, int *b);

int main (){
	int a,b;
	a = 10;
	b = 20;	
	printf ("---Before Swap two number---\n");
	printf ("a = %d\nb = %d\n",a,b);
	printf ("---After Swap two number---\n");
	swap(&a,&b);
	printf ("a = %d \nb = %d", a,b);
	
	return 0;
}

void swap(int *a, int *b){
	int p;
	p = *a;
	*a = *b; 
	*b = p;
	
}
