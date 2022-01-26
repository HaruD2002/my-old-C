#include <stdio.h>
#include <stdlib.h>

main(){s
	int n,i,j; 
	scanf ("%d",&n);
	int a[n];
	for (i=1; i<=n ;i++){
		scanf ("%d",&a[i]);
	}
	
	for (i=1;i<=n/2;i++){
		if (a[i] != a[n-i-1]){
			printf("It is not symmetric");
			break;
		} 
		else {
			printf("It is symmetric");
			break;
		}
	}
	return 0;
}
