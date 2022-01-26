#include <stdio.h>

int main(){
	int i,n,Sum=0;

	scanf("%d",&n);
	int sumodd[n];
	for(i=0;i<n;i++){
		scanf("%d",&sumodd[i]);
		if (sumodd[i]%2!=0 && sumodd[i]>0){
			Sum += sumodd[i];
		}
		}
	
	printf ("%d",Sum);
	return 0;
}
