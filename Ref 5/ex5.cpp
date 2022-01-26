#include <stdio.h>
#include <math.h>
main(){
	int i,n,sum=0;
	while(n<=10){
	
	scanf("%d",&n);
	}

	int s[n];
	
	for (i=0; i<=n;i++){
		if (s[i]%2==0){
		scanf ("%d",&s[i]);
	}
	}
	
	for (i=0;i<=n;i++){
	 	if (i%2==0){
	 		sum += s[i]*2;
		 }
		
	}
		printf("%d",sum);
}
