#include <stdio.h>

int main (){
	
	int i,n;
	
	do {
		printf ("Enter N =");
		scanf ("%d", &n);
		
	if (n<0){
		printf ("Enter n with value bigger than 0 :");
	continue;
	}
}
while (n<0);

	for (i=1;i<n;i++){
		if (n%i==0){
		printf ("\n %d",i);
	}
	}
	return 0;
}
