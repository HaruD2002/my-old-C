#include <stdio.h>

int main(){
	int i,n; 
do {
	
	printf ("Enter n:");
	scanf ("%d", &n);
		
if (n < -5){
	printf ("re-enter N. N must be greater or equal to -5: ");
	continue;
}
}
while (n <-5);

for ( i=n; i >=-5 ; i--){
	printf (" \n %d",i);
}

return 0;
}
