#include <stdio.h>

main(){
	int i,j;
	int a[10];
	int temp;
	
	for (i=0;i<10;i++){
		scanf ("%d",&a[i]);
	}
	
	for (i=0;i<10;i++){
		if (a[i]%2 == 0){
			printf("%d ",a[i]);
		}
	}
	
	for (i=10-1;i<=0;i--){
		for (j=0;j<10;j++){
		}
		temp = a[i];
		a[j] = a[i];
		a[j] = temp;
		printf("%d",a[j]);
	}
}
