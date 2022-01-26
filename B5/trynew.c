#include <stdio.h>

int main (){
	int b =10,*a;
	a = &b;
	printf ("a = %d\n", b);
	printf ("address of a = %d\n",&b);
	printf ("address of pointer a with pointer = %d \n",a);
	printf ("address of a with pointer = %d\n",*a);
	
	*a = 20;
	printf ("new value of a when the pointer change: %d", b);
}

