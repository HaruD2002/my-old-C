#include <stdio.h>
// 
main(){
	int n;
	int i,sum=1; 
	scanf ("%d",&n);
	
	for (i=2;i<=n/2;i++){
		if (i%2==0){
			
			sum *=i;
		}
		}
		printf("%d",sum);
}


