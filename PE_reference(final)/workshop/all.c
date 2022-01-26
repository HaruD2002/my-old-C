#include <stdio.h>

int main() {
	
	int i,n;
	
	printf ("Enter N =");
	scanf ("%d",&n);
	
	for (i>=1 ; i<n; i++){
		printf ("\n %d ",i);
	}
	i = 0;
	while(i<=n)
	{
		printf ("\n %d",i);
		i++;
	}
		
	do { 
	printf ("\n %d",i);
	i++;
	}
	while (i<=n);
	return 0;
}


