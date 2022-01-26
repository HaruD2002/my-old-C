#include <stdio.h>

int main() {
	
	int i,n,m,F1=1,F2=0,result=1;
	
	printf ("Enter N:");
	scanf ("%d",&n);
	
	 
	for (i=1; i<=n ; i++){
		F1*=i; 	
		F2+=i;
	}
		
	printf ("\nF1(n) = %d \n",F1);
	printf ("\nF2(n) = %d \n ",F2);
	printf ("\nEnter M:");
	scanf ("%d", &m);
	
	while (m!=0){
		result *=n;
		--m;
	}
	
	printf ("\n Result = %d",result);
	
	return 0;
}
