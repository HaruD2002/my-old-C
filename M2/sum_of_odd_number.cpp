//tinh tong so le tuf 1-n

#include <stdio.h>

main(){
	int n,i;
	int sum =0;
	scanf ("%d",&n);
	
	for (i=0;i<=n;i++){
		
		if(i/2 !=0){
			sum +=i;			
		}
	}
	printf("%d",sum);
}
