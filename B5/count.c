#include<stdio.h>

int main(){
	int i,n,k;
	int count=0;
	
	scanf("%d",&k);
	scanf ("%d",&n);
	int array[n];	
	for (i=0;i<n;i++){
		scanf("%d",&array[i]);
		if (array[i] ==k){
			count++;		
		}
	}	
	printf ("%d",count);

}
